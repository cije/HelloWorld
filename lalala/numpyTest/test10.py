import numpy as np

a = np.loadtxt("lalala/iris_sepal_length.csv")
print(a)
print("和：", np.sum(a))
print("均值：", np.average(a))
print("标准差：", np.std(a))
print("最小值：", np.min(a))
print("最大值：", np.max(a))
