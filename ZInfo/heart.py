from turtle import *
color("red")
begin_fill()
pensize(3)
left(50)
forward(133)
circle(50,200)
right(140)
circle(50,200)
forward(133)
end_fill()

pensize(13)
penup()
forward(100)
color("black")
write("i luv you")

pensize(3)
pendown()
forward(150)
color('red', 'yellow')
begin_fill()
while True:
    forward(200)
    left(170)
    if abs(pos()) < 1:
        break
end_fill()
done()