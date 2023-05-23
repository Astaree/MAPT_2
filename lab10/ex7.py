from ex5 import square
from ex5 import Circle
from ex5 import EquilateralTriangle

# Create objects and perform calculations
square_obj = square.Square(5)
print("Square Area:", square_obj.calculate_area())
print("Square Perimeter:", square_obj.calculate_perimeter())

circle_obj = Circle(3)
print("Circle Area:", circle_obj.calculate_area())
print("Circle Circumference:", circle_obj.calculate_circumference())

triangle_obj = EquilateralTriangle(4)
print("Triangle Area:", triangle_obj.calculate_area())
print("Triangle Circumference:", triangle_obj.calculate_circumference())
