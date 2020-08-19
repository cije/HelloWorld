import pandas as pd

data = pd.read_excel("lalala/pandasTest/超市营业额2.xlsx")
data["工号"] = data["工号"].apply(lambda x: x % 10 * 10000 + x)
print(data["工号"])
data.to_excel("超市营业额2_修改工号.xlsx")
