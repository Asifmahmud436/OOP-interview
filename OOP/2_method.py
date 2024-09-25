
class A:
    pass

def display():
    print("I am a Method")

obj = A()
obj.value = display

print(obj.value)
print(obj)
