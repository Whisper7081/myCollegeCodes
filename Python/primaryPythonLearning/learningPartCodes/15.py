'''创建一个数组，循环遍历全数组，输出同时被3、5的数字，只输出6个'''
myList = range (1,1000)
num = 0
for k in myList:
    if k % 3 == 0 and k % 5 == 0 and num < 6:
        print (k)
        num = num +1
    elif k % 3 == 0 and k % 5 ==0 and num == 6 :
        break
    else :
        continue