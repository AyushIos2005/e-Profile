

import math

class Circle:
    shape = "Circle"

    # (ii) Constructor with radius argument
    def __init__(self, radius):
        self.radius = radius

    def get_radius(self):
        return self.radius

    def calc_area(self):
        return math.pi * (self.radius ** 2)

    @classmethod
    def show_shape(cs):
        return cs.shape


# --- Main Program ---
print("Welcome to Circle Program!!")
r = float(input("Enter the radius of the circle: "))

c1 = Circle(r)

print("Shape:", Circle.show_shape())
print("Radius of Circle:", c1.get_radius())
print("Area of Circle:", round(c1.calc_area(), 2))
