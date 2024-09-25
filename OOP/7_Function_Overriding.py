class Animal:
    def sound(self):
        print("I am a random animal. :( ")

class Bird(Animal):
    def sound(self):
        print("I am a Bird.Chirp chirp!")

class Cow(Animal):
    def sound(self):
        print("I am a Cow.Moo!")


random_animal = Animal()
cow = Cow()
bird = Bird()

random_animal.sound()
bird.sound()
cow.sound()


# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding