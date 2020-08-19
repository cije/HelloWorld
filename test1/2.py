import requests

a = requests.get("https://www.baidu.com").text
print(a)