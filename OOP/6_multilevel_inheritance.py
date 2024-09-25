class Grandfather:
    def __init__(self,grandfather_name) -> None:
        self.grand_father = grandfather_name
    def show_grandfather(self):
        print(f'{self.grand_father} is your Grandfather.')
        
class Father(Grandfather):
    def __init__(self, grandfather_name,father_name) -> None:
        super().__init__(grandfather_name)
        self.father_name = father_name
    def show_father(self):
        print(f'{self.father_name} is your Father.')

class Child(Father):
    def __init__(self, grandfather_name, father_name,child_name) -> None:
        super().__init__(grandfather_name, father_name)
        self.child_name = child_name
    def show_name(self):
        print(f'Assalamu Alaikum, {self.child_name}.')

# here father class inherited from grandfather class and 
# child class inherited from father class.
# Thus,this is an example of multilevel inheritance

obj1 = Child("John","Doe","Asif")
obj1.show_name()
obj1.show_father()
obj1.show_grandfather()