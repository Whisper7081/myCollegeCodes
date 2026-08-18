length = int(input("输入数组并输出："))
myList = [chr(x) for x in range(65,65+length)]
while length >= 0:
    if length > 26:
        print("当前数字已经超过上限,请输入一个小于等于26的数")
        length = int(input("输入数组并输出："))
    else:
        print(myList)
        for char in myList:
            print(char) #列表推导式
    break#break要放在if这个缩进下

