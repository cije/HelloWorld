print("元组")
t = (123, 456, ("hello", "world"))
print(t)

print("\n列表")
list = [0, 1, 2, 3, 4]
print(list)
list.append("python")
list.reverse()
print(list)
print(list.pop())

print("\n字典")
dict = {"China": "中国"}
dict["Japan"] = "日本"
for iterm in dict.items():
    print(iterm)