# coding=utf-8

# 所有名片记录的列表
card_list = [
    {"name": "admin", "phone": "123456", "qq": "123456", "email": "admin@admin.cn"}
]
card_th_str = ["姓名", "电话", "QQ", "Email"]
card_th = ["name", "phone", "qq", "email"]


def show_menu():
    print("*" * 65)
    print("名片管理系统")
    print("")
    print("1. 新增名片")
    print("2. 显示全部名片")
    print("3. 查询名片")
    print("")
    print("0. 退出系统")
    print("*" * 65)


def add():
    """新增名片"""
    print("-" * 65)
    print("新增名片")
    # 提示用户输入名片的详细信息
    name = input("请输入姓名：")
    phone = input("请输入电话：")
    qq = input("请输入QQ：")
    email = input("请输入eamil：")
    # 使用用户输入的信息建立一个名片字典
    card_dict = {"name": name, "phone": phone, "qq": qq, "email": email}
    print("你输入的信息为：")
    print(card_dict)
    flag = input("确定要添加？Y/N")
    if flag == "Y":
        # 将名片字典添加到名片列表中
        card_list.append(card_dict)
        print(card_list)
        # 提示用户添加完成
        print("添加名片成功!")
    else:
        print("添加名片失败，返回主菜单！")


def print_card_th_str(card_th_str):
    for th in card_th_str:
        print(th, end="\t\t")
    print("")
    print("=" * 65)


def print_card_dict(card_dict):
    for th in card_th:
        print(card_dict.get(th), end="\t\t")
    print("")


def showAll():
    """显示全部"""
    print("-" * 65)
    print("显示全部名片")
    if len(card_list) == 0:
        print("名片列表为空，请添加名片！")
    else:
        print_card_th_str(card_th_str)
        for card_dict in card_list:
            print_card_dict(card_dict)


def update(find_dict):
    """修改"""
    for i in range(0, len(card_th)):
        input_value = input("请输入要修改的%s：(空白或直接回车为不变)" % card_th_str[i])
        if input_value.isspace() | len(input_value) == 0:
            continue
        else:
            find_dict[card_th[i]] = input_value
    print("修改完成！")


def delete(find_dict):
    """删除"""
    card_list.remove(find_dict)
    print("删除名片%s成功！" % find_dict)


def deal(find_dict):
    """处理找到的名片"""
    action_str = input("请选择要执行得到操作：[1] 修改 [2] 删除 [0或其他] 返回上级菜单")
    if action_str == "1":
        update(find_dict)
    elif action_str == "2":
        delete(find_dict)
    else:
        pass


def find():
    """查询名片"""
    print("-" * 65)
    print("查询名片")
    tName = input("请输入要查询名片的姓名：")
    for card_dict in card_list:
        if card_dict.get("name") == tName:
            print("找到了")
            print_card_th_str(card_th_str)
            print_card_dict(card_dict)
            deal(card_dict)
            break
    else:
        print("抱歉，未找到 %s" % tName)


switcher = {"1": add, "2": showAll, "3": find}


def run(action_str):
    switcher.get(action_str)()
