"""class Animal:  # base or parent class
    def speak(self):
        print("Animal Speaking")


# child class Dog inherits the base class Animal

class Dog(Animal):  # derived or child class
    def bark(self):
        print("dog barking")


d = Dog()  # object of child class

d.bark()  # call to fun
d.speak()  # call to fun """


"""class parent:
    def add(self,a,b):
        total=a+b
        print("Total is ",total)
    def multi(self,a,b,):
        mul=a*b
        print("multiplication is ",mul)

class child(parent):
    def subs(self,a,b):
        substraction=a-b
        print("Substraction is ",substraction)
# 
# 
# c1=child()
# c1.add(12,44)
# c1.subs(12,2)"""
#
# # multilevel inheritance
#
# class Animal:
#     def speak(self):
#         print("Animal Speaking")
#
# #The child class Dog inherits the base class Animal
#
# class Dog(Animal):
#     def bark(self):
#         print("dog barking")
#
# #The child class Dogchild inherits another child class Dog
#
# class DogChild(Dog):
#     def eat(self):
#         print("Eating bread...")
#
# d = DogChild()
# d.bark()
# d.speak()
# d.eat()

# Multiple inheritence

class Calculation1:
    def Sum(self,a,b):
        return a+b;

class Calculation2:
    def Multiplication(self,a,b):
        return a*b;

class Derived(Calculation1,Calculation2):
    def Divide(self,a,b):
        return a/b;

d = Derived()
print(d.Sum(10,20))
print(d.Multiplication(10,20))
print(d.Divide(10,20))