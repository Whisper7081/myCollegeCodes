import turtle
numberCircle = 360
radius = 200
angle = 1
arrowSpeed = 0
turtle.setup(500,500)
turtle.speed(arrowSpeed)
for x in range(numberCircle):
    turtle.circle(radius)
    turtle.left(angle)
turtle.done()