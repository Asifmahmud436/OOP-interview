from abc import ABC,abstractmethod
from math import pi

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
    @abstractmethod
    def perimeter(self):
        pass


class Circle(Shape):
    def __init__(self,radius) -> None:
        self.radius = radius

    def area(self):
        print(self.radius*self.radius*pi)

    def perimeter(self):
        print(self.radius*2*pi)


class Rectangle(Shape):
    def __init__(self,height,width) -> None:
        self.height = height
        self.width = width

    def area(self):
        print(self.height*self.width)

    def perimeter(self):
        print((self.height+self.width)*2)

rectangle = Rectangle(3,4)
circle = Circle(4)
rectangle.area()
rectangle.perimeter()
circle.area()
circle.perimeter()
