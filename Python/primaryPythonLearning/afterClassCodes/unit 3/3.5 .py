list1 = [0]

while len(list1) > 0:
    a = int(input(" "))
    if a >= 0:
        list1.append(a)
    else :
        break

sum = 0
for i in list1 :
    sum = sum + i
print (f"总和:{sum}",f"列表情况：{list1}",f"列表长度：{len(list1)}",sep=" ")