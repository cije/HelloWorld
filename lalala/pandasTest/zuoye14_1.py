import pandas as pd
import numpy as np

# 读取文件
data = pd.read_excel("lalala/pandasTest/超市营业额2.xlsx")
print(data)

# 按日期分组 求出每个日期的总交易额
data_d = data[["日期", "交易额"]].groupby("日期", as_index=False).agg(np.sum)
print(data_d)

# 单日交易总额最小的3天
data_m = data_d.sort_values("交易额").iloc[:3, :]
print(data_m)

# 转换为星期
data_m["日期"] = pd.to_datetime(data_m["日期"]).dt.weekday
weekday = {0: "星期一", 1: "星期二", 2: "星期三", 3: "星期四", 4: "星期五", 5: "星期六", 6: "星期天"}
for i in data_m["日期"]:
    data_m["日期"] = data_m["日期"].replace(i, weekday.get(i))
print(data_m)
