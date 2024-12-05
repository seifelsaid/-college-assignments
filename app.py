import math
import random
import turtle
turtle.shape("turtle")
turtle.left(90)
turtle.forward(140)
turtle.right(90)
turtle.penup()
turtle.forward(50)
turtle.pendown()
for i in range(0,5):
    if i>=2:
        turtle.forward(70)
        turtle.left(90)
    else:
         turtle.forward(70)
         turtle.right(90)
turtle.right(90)
turtle.penup()
turtle.forward(50)
turtle.pendown()
for i in range(0,6):
    if i==2:
        turtle.forward(70)
        turtle.left(180)
    else:
         turtle.forward(70)
         turtle.left(90)


turtle.exitonclick()





