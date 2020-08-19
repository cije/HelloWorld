# To add a new cell, type '# %%'
# To add a new markdown cell, type '# %% [markdown]'
# %%
import pandas as pd

data = pd.read_excel(f"F:/onedrive/HelloWorld/lalala/sklearn/bankloan.xls")
data


# %%
x = data.iloc[:, :-1]
y = data.iloc[:, -1]


# %%
from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=1)

# %% [markdown]
# 逻辑回归

# %%
from sklearn.linear_model import LogisticRegression

LR = LogisticRegression()
LR.fit(x_train, y_train)
LR.score(x_test, y_test)

# %% [markdown]
# 朴素贝叶斯

# %%
from sklearn.naive_bayes import GaussianNB, BernoulliNB, MultinomialNB

gnb = GaussianNB()
gnb.fit(x_train, y_train)
print("朴素贝叶斯在测试集上的准确率：")
gnb.score(x_test, y_test)

# %% [markdown]
# 决策树


# %%
from sklearn.tree import DecisionTreeClassifier

depths = range(1, 15)
train_score_list = []
test_score_list = []
for d in depths:
    dtc = DecisionTreeClassifier(criterion="entropy", max_depth=d)
    dtc.fit(x_train, y_train)
    train_score_list.append(dtc.score(x_train, y_train))
    test_score_list.append(dtc.score(x_test, y_test))
import matplotlib.pyplot as plt

plt.rcParams["font.family"] = "SimHei"
plt.plot(depths, train_score_list)
plt.plot(depths, test_score_list)
plt.legend(["训练集", "测试集"])
plt.grid(True)
plt.title("不同决策树深度下的模型准确率")
plt.xlabel("决策树深度")
plt.ylabel("准确率")

# %%
