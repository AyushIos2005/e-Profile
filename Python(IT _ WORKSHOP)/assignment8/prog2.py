
'''''
B. Fill in the class Cylinder and find the volume and surface area of that.
class Cylinder:
def __init__(self,height=1,radius=1):
pass
def volume(self):
pass
def surface_area(self):
pass
EXAMPLE OUTPUT
 c = Cylinder(2,3); c.volume() 56.52; c.surface_area() 94.2
 '''

import math

class Cylinder:

    def __init__(self,height=1,radius=1):
        self.height = height
        self.radius = radius
    def volume(self):
        
        h=self.height
        r=self.radius

        return (math.pi*h*(r**2))        #π r² h
    
    def suface_area(self):

        h=self.height
        r=self.radius

        return ((2*math.pi*r*h)+(2*math.pi*(r**2)))   #2π r h + 2π 

print("Welcome cylinder calculation !!")    
height=int(input("Enter a height of cylinder : ")) 
radius = int(input('Enter a radius of cylinder : ')) 

c=Cylinder(height,radius)
print('Volume of Cylinder : ',c.volume())
print('Surface area of Cylinder : ',c.suface_area())

