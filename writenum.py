import turtle
n = int(input("what is the number you want between 1 and 3:"))
turtle.shape("turtle")
if n==0:
    for i in range(0,360):
        turtle.forward(1)
        turtle.right(1)
elif n ==1:
    turtle.left(90)
    turtle.forward(140)
elif n ==2:
    for i in range(0, 5):
        if i >= 2:
            turtle.forward(70)
            turtle.left(90)
        else:
            turtle.forward(70)
            turtle.right(90)
else:
    for i in range(0, 6):
        if i == 2:
            turtle.forward(70)
            turtle.left(180)
        else:
            turtle.forward(70)
            turtle.left(90)

turtle.exitonclick()
