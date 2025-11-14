# A. Fill in the Line class methods to accept coordinates as a pair of tuples and return the slope and
# length of the line.
# class Line:
# def __init_(self, coor1, coor2):
# pass
# def distance(self):
# pass
# def slope(self):
# pass
# EXAMPLE OUTPUT
# coordinate1 = (3,2)
# coordinate2 = (8,10)
# li = Line(coordinate1, coordinate2); li.distance() 9.433981132056603; li.slope() 1.6
 
import math

# class 
class Line:
    def __init__(self,coor1,coor2):
        self.coor1 = coor1
        self.coor2 = coor2
    def distance(self):
            x1,y1 = self.coor1
            x2,y2 = self.coor2

            return math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    def slope(self):
            x1,y1 = self.coor1
            x2,y2 = self.coor2  

            return ((y2 - y1 ) / (x2 - x1))

# main function
print("Welcome to straight line program!!")
a=int(input('Enter a x1 coordinate : '))
b=int(input('Enter a y1 coordinate : '))

c=int(input('Enter a x2 coordinate : '))
d=int(input('Enter a y2 coordinate : '))

point1 = (a,b)
point2 = (c,d)

l1=Line(point1,point2)

print("Distance:", l1.distance())
print("Slope:", l1.slope())



