'''绘制一个五角星'''
counts = 4
import turtle 
turtle.speed(5)
turtle.pensize(5)
turtle.pencolor("brown")
turtle.fillcolor("blue")
turtle.setup(800,800)
turtle.penup()
turtle.goto(-50,-50) #整个图turtle图的中心是(0,0)
turtle.pendown()
turtle.begin_fill()
turtle.left(72)
turtle.forward(200)
while counts > 0:
   turtle.right(144)
   turtle.forward(200)
   counts = counts - 1
turtle.end_fill()
turtle.penup()
turtle.goto(150,150)
turtle.pendown()
turtle.write("Hello World",font = ('Arial',20,'normal'))
turtle.hideturtle()
turtle.done()
