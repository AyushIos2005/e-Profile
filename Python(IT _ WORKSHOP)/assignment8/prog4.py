import math

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def get_radius(self):
        return self.radius

    def calc_area(self):
        return round(math.pi * self.radius ** 2, 2)


class Cylinder(Circle):
    def __init__(self, radius, height):
        super().__init__(radius)
        self.height = height

    def calc_area(self):
        r = self.radius
        h = self.height
        return round(2 * math.pi * r * (h + r), 2)

# Example Output
cyl = Cylinder(3, 5)
print("Radius:", cyl.get_radius())
print("Cylinder Surface Area:", cyl.calc_area())
