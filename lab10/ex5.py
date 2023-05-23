import math

class Circle:
    def __init__(self, radius):
        self.radius = radius
    def calculate_circumference(self):
        return 2 * math.pi * self.radius
    def calculate_area(self):
        return math.pi * self.radius**2

class EquilateralTriangle:
    def __init__(self, side_length):
        self.side_length = side_length
    def calculate_circumference(self):
        return 3 * self.side_length
    def calculate_area(self):
        return (math.sqrt(3) / 4) * self.side_length**2

class square:
    def __init__(self, side_length):
        self.side_length = side_length
    def calculate_perimeter(self):
        return 4 * self.side_length
    def calculate_area(self):
        return self.side_length**2
    
# Example usage:
circle = Circle(5)
print("Circle Radius:", circle.radius)
print("Circle Circumference:", circle.calculate_circumference())
print("Circle Area:", circle.calculate_area())

triangle = EquilateralTriangle(7)
print("Triangle Side Length:", triangle.side_length)
print("Triangle Circumference:", triangle.calculate_circumference())
print("Triangle Area:", triangle.calculate_area())