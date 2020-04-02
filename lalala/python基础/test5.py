content = []
with open("E:/DATA/lenovo/Desktop/white_wine.csv", "r") as file:
    for line in file.readlines():
        tmp = line.strip('\n').split(",")
        content.append(tmp)
for list in content[0:5]:
    print(list)
