class SqrArea:
    def cal_area(self, side):
        return side * side

class SqrPeri:
    def cal_peri(self, side):
        return 4 * side

class Sqr(SqrArea, SqrPeri):
    def __init__(self, side):
        self.side = side

    def show(self):
        print("Side:", self.side)
        print("Area:", self.cal_area(self.side))
        print("Perimeter:", self.cal_peri(self.side))

# Example Output
sq = Sqr(5)
sq.show()
