# coding=utf-8

from cards_tools import *

while True:
    show_menu()
    action_str = input("请输入希望执行的操作：")
    print("您选择的操作是 [%s]" % action_str)

    if action_str in ["1", "2", "3"]:
        run(action_str=action_str)
    elif action_str == "0":
        # 0 退出系统
        print("退出系统")
        break
    else:
        # 其他 输入错误 提示
        print("输入错误，请重新输入！")
