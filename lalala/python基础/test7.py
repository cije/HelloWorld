import csv

with open("lalala\white_wine.csv", "r") as f:
    reader = csv.reader(f)
    content = []
    for t in reader:
        content.append(t)
    qualities = set()
    for i in content[1:]:
        qualities.add(int(i[-1]))
    print(qualities)
    dict = dict()
    for i in content[1:]:
        quality = int(i[-1])
        if quality not in dict.keys():
            dict[quality] = [i]
        else:
            dict[quality].append(i)
    print(dict[6][-1])
