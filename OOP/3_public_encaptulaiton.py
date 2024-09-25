
# A normal class with no private encapsulation is public,or public encapsulation
class Person:
    def __init__(self,person,age):
        self.person = person
        self.age = age
    def info(self):
        return f'Dear {self.person}, you are {self.age} years old.'

obj1 = Person("Asif",24)
print(obj1.info())