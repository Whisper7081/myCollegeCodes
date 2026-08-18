num = int(input(' '))
price0 = 99

def price():
    priceTotal = num * priceSingle
    print(f"单个售价：{priceSingle}，整体售价：{priceTotal}")

if num < 10 :
    priceSingle = price0 
    price()
elif num >= 10 and num < 20 :
    priceSingle = price0 * 0.9
    price()
elif num >= 20 and num < 50 :
    priceSingle = price0 * 0.8
    price()
elif num >= 50 and num < 100 :
    priceSingle = price0 * 0.7
    price()
else :
    priceSingle = price0 * 0.6
    price()

"""
f-string 的强大之处在于，大括号 {} 里可以放任何有效的Python表达式，而不仅仅是变量名。例如：

price = 12.5
quantity = 3
print(f"总价：{price * quantity}")  
输出会是：总价：37.5

# 调用方法
name = "python"
print(f"大写：{name.upper()}") 
输出会是：PYTHON

f-string会把语句执行并将结果转为字符串放在大括号的位置
"""

