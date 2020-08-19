import pandas as pd

# 读取csv文件
data = pd.read_csv("lalala/pandasTest/white_wine.csv")
print(data)
# 统计汇总
print(data.describe())
# 相关系数矩阵
corr = data.corr()
print(corr)
# 根据相关矩阵'quality'列的绝对值 降序排列
corr["tmp"] = corr["quality"].abs()
corr = corr.sort_values("tmp", ascending=False).drop("tmp", axis=1)
print(corr)
