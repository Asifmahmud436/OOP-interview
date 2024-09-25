class Father:
    def __init__(self,father_name) -> None:
        self.father_name = father_name
    def show_father(self):
        return f"Fathers' name: {self.father_name}"

class Mother:
    def __init__(self,mother_name) -> None:
        self.mother_name = mother_name
    def show_mother(self):
        return f"Mothers' name: {self.mother_name}"

class Child(Father,Mother):
    def __init__(self,father_name,mother_name,child_name) -> None:
        Father.__init__(self,father_name)
        Mother.__init__(self,mother_name)
        self.child_name = child_name
    
    def show_child(self):
        return f"Childs' name: {self.child_name}"
    
# as the child class inherited from multiple classes,it represents multiple inheritance
obj1 = Child("John","Stephany","Asif")
print(obj1.show_father())
print(obj1.show_mother())
print(obj1.show_child())
        