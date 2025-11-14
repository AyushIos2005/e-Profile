class StLine:
    def __init__(self, length):
        self.length = length


class Square(StLine):
    def __init__(self, side):
        super().__init__(side)

    def calc_area(self):
        return self.length ** 2


class Cube(Square):
    def __init__(self, edge, height):
        super().__init__(edge)
        self.height = height

    def calc_area(self):
        return 6 * (self.length ** 2)

# Example Output
line = StLine(5)
sq = Square(4)
cu = Cube(3, 6)

print("Length of Line:", line.length)
print("Area of Square:", sq.calc_area())
print("Area of Cube:", cu.calc_area())
