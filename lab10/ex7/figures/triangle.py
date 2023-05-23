import math

class EquilateralTriangle:
    def __init__(self, side_length):
        self.side_length = side_length
    def calculate_circumference(self):
        return 3 * self.side_length
    def calculate_area(self):
        return (math.sqrt(3) / 4) * self.side_length**2