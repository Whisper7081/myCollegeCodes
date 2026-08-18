'''编写一个程序，使得可以判断输入的正确格式的正确日期是否为\"神奇\"日期'''

year = int(input(" "))
month = int(input(" "))
day = int(input(" "))
list1 = [1,3,5,7,8,10,12]

def printMode(): #输出模块组
    chengji = month * day
    if chengji == year2 :
        print(str(year),str(month),str(day),'这是一个神奇的日期',sep=" ") #这个地方不加str也可以运行，因为这个变量对应的是数字
    else :
        print(str(year),str(month),str(day),'这是一个并不特殊的日子，平平淡淡也很好~~~',sep=" ")

def isNumber(s): #输入字符串类型判断
    try:
        float(s)
        return True
    except ValueError:
        return False
    
A = isNumber(year);B = isNumber(month);C = isNumber(day)
if A == True and B == True and C == True:
    if int(year) in range(1,10000) and int(month) in range(1,13) and int(day) in range(1,32) and len(str(year)) == 4:
        year2 = int(str(year)[2:])
        if month == 2:
            if day in range(1,29):
                printMode()
            else :
                if day == 29:
                    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
                        printMode()
                    else :
                        print("输入数据有误")                        
        elif int(month) in list1:
            printMode()
        else :
            if day == 31:
                print("输入数据有误")
            else :
                printMode()
    else : 
        print("输入数据有误")
else :
    print('输入数据有误')
#程序运行正确
'''补充：常见的切片写法
写法	含义	示例（text = "Hello"）	结果
[:2]	取前 2 个字符	text[:2]	"He"
[2:]	从索引 2 开始取到末尾	text[2:]	"llo"
[1:3]	取索引 1 到 2（不包括 3）	text[1:3]	"el"
[::-1]	反转字符串	text[::-1]	"olleH"
[::2]	每隔一个取一个	text[::2]	"Hlo"
'''

'''
数字判断方法
def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        return False
'''

'''
try:
    # 可能出错的代码
    risky_code()
except:
    # 出错时执行的代码
    handle_error()
'''
