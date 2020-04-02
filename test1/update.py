import os
from subprocess import call

outdateds = os.popen('pip3 list --outdated | cut -d" " -f 1').read()
outdated = outdateds.split('\n')[2:-1]

# 这两行代码取到过期的库

for i in outdated:
    if input('是否需要升级' + i + '这个库？ y/n\n> ').lower() == 'y':
        call('pip3 install --upgrade ' + i, shell=True) 
