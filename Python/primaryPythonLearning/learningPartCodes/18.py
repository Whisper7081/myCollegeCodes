'''编写一个程序，使得其可以画出椭圆'''
import turtle
import math
# 设置
screen = turtle.Screen()
screen.bgcolor("white")
pen = turtle.Turtle()
pen.speed(0)
pen.hideturtle()
pen.pencolor("blue")
pen.pensize(2)
# 关闭动画，画完再显示
turtle.tracer(0)
# 椭圆参数
a = 200
b = 100
# 移动到起点
pen.penup()
pen.goto(a, 0)
pen.pendown()
# 画椭圆，步长 0.5° 利用椭圆参数方程
angle = 0
while angle <= 360:
    rad = math.radians(angle)
    x = a * math.cos(rad)
    y = b * math.sin(rad)
    pen.goto(x, y)
    angle += 0.5
# 刷新显示
turtle.update()
turtle.done()
