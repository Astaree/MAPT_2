
from math import pi as PI


class Rectangle:
    def __init__(self, a,b):
        self.a = a
        self.b = b
        self.area()
        self.circumference()
    
    def area(self):
        self.area = self.a*self.b
    
    def circumference(self):
        self.circumference = 2*self.a + 2*self.b

    def display(self):
        print("Area: ",self.area)
        print("Circ: ",self.circumference)

class Circle:
    def __init__(self, r):
        self.r = r
        self.area()
        self.circumference()
    
    def area(self):
        self.area = PI*self.r*self.r
    
    def circumference(self):
        self.circumference = 2*PI*self.r

    def display(self):
        print("Area: ",self.area)
        print("Circ: ",self.circumference)


if __name__ == "__main__":
    rect = Rectangle(2,3)
    rect.display()
    circ = Circle(5)
    circ.display()