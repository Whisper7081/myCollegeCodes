import turtle
import math

# 输入参数
a = int(input('起始半径 a: '))
b = int(input('螺线间距 b: '))

screen = turtle.Screen()
screen.setup(800, 600)
screen.title("参数方程曲线 - 阿基米德螺线")

t = turtle.Turtle()
t.speed(0)
t.pensize(2)

# 阿基米德螺线参数方程：r = a + b*θ
def functionPoint(theta, a, b):
    r = a + b * theta           # 极径
    x = r * math.cos(theta)     # 转直角坐标
    y = r * math.sin(theta)

    return x, y

# 移动到起点
t.penup()
start_x, start_y = functionPoint(0, a, b)
t.goto(start_x, start_y)
t.pendown()

# 绘制螺线
for t_val in range(0, 10000):    
    theta = t_val * 0.05  #t_val是可以之前不用被定义的，因为它接下来马上就被用掉了，只是一个可变输入变量
    x, y = functionPoint(theta, a, b)  
    t.goto(x, y)

t.hideturtle()
turtle.done()
