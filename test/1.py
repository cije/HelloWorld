import time
# num=20
# for i in range(num):
#     print("#",end="",flush=True)
#     time.sleep(1)

# days=368
# for i in range(days):
#     print("\r","进度百分比：{0}%".format(round((i+1)*100/days)),end="",flush=True);
#     time.sleep(0.02)
from tqdm import tqdm
for i in tqdm(range(int(9e6))):
    pass