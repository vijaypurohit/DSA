import turtle

 
turtle.speed(3)
turtle.bgcolor('black')
turtle.pensize(3)

turtle.color('red') 
turtle.begin_fill() 
#heart
turtle.left(50)
turtle.forward(133)
turtle.circle(50,200)
turtle.right(140)
turtle.circle(50,200)
turtle.forward(133)
turtle.end_fill()
#text
# turtle.pensize(53)
turtle.up()
turtle.setpos(-48,95)
turtle.down()
# turtle.forward(100)
turtle.color("lightgreen")
turtle.write("I LOVE YOU", font=("Verdana", 12, "bold"))
turtle.up()
turtle.setpos(-38,55)
turtle.down()
turtle.write("LC", font=("Verdana", 12, "bold"))
turtle.ht(); #hide turtle
 
turtle.done()