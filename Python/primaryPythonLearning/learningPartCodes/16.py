'''画圆的海龟代码'''
import turtle
numberCircle = int(input('绘制同心圆的个数:'))
startRadius = 25
offSet = 10
arrowSpeed = 200
turtle.speed = (arrowSpeed)
turtle.hideturtle()
radius = startRadius
for count in range(numberCircle):
    turtle.circle(radius)
    x = turtle.xcor()
    y = turtle.ycor()-offSet
    radius = radius + offSet
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
    turtle.down()