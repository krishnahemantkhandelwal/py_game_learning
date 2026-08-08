import turtle

pen = turtle.Turtle()
def direction(dir):
    if dir== "up":
        pen.left(90)
    elif dir== "down":
        pen.right(90)
    elif dir== "left":
        pen.left(90)
    elif dir== "right":
        pen.right(90)
pen.speed(5)
pen.penup()
pen.back(150)
pen.left(90)
pen.forward(25)
pen.pendown()
pen.right(90)
pen.color("blue")
pen.circle(25)
pen.penup()
pen.right(90)
pen.forward(25)
pen.left(90)
pen.forward(25)
pen.pendown()
pen.color("yellow")
pen.circle(25)
pen.penup()
pen.forward(25)
direction("up")
pen.forward(25)
direction("right")
pen.forward(5)
pen.pendown()
pen.color("black")
pen.circle(25)
pen.penup()
direction("down")
pen.forward(25)
pen.left(90)
pen.forward(30)
pen.pendown()
pen.color("green")
pen.circle(25)
pen.penup()
pen.forward(30)
direction("up")
pen.forward(25)
pen.right(90)
pen.pendown()
pen.color("red")
pen.circle(25)
turtle.done()

#import winsound

#winsound.Beep(1000, 500)  


#import random
#fs= ['dt', 'sk', 'gh', 'sang', 'ds', 'eclaw']
#fru= ['kit', 'port', 'lightn', 'light', 'trex', 'rock', 'tig', 'shad', 'yeti', 'dough', 'gas', 'cont', 'drag', 'dark', 'love', 'pain', 'create', 'ice', 'ghost', 'rubb', 'spir', 'smoke', 'bomb', 'sound', 'diam', 'spid', 'quake']
#swo= ['spik', 'grav', 'cdk', 'grav', 'yama', 'dtri', 'shark', 'tush', 'ttk', 'db', 'polev2', 'buddy', 'mid', 'ren', 'sad', 'twin', 'soul']
#gun= ['sg', 'dstorm', 'kab', 'acid', 'duaf']
#stat= ['gun', 'swo', 'fru', 'hybrid']
#print("fs: ", random.choice(fs))
#print("fruit: ", random.choice(fru))
#print("sword: ", random.choice(swo))
#print("gun: ", random.choice(gun))
#print("stat: ", random.choice(stat))