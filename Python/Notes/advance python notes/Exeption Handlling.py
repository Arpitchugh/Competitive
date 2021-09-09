# Program Without Exception Handling

""" int(input("Enter a:"))
b = int(input("Enter b:"))
c = a / b;
print("a/b", c)
# other code:
print("Hi I am other part of the program")"""

# try:
#     a = int(input("Enter a:"))
#     b = int(input("Enter b:"))
#     c = a/b;
#     print("a/b=",c)
#
# except Exception:
#     print("can't divide by zero")
# #else:
# #    print("Hi I am else block")
# # else block is displayed if error dont come
#
# print("this is another part of program")
# print("Hi Students")


# Named Exception

"""try:
    fileptr = open("saibaba.txt","r")
except IOError:
    print("File not found")
else:
    print("The file opened successfully")
    fileptr.close()"""

# multiple exception

try:
a=10/2;
except ArithmeticError:
    print("Arithmetic Exception")
except IndentationError:
    print("Indentation is not correct")
else:
    print ("Successfully Done")


try:
    fileptr = open("saibaba.txt","r")
except:
    print("Error")
else:

finally:
    print("file closed")
fileptr.close()


a=int(input("Enter a"))
b=int(input("Enter b"))

try:
    c=a/b
except:
    print("Zero Division Error")
finally:
    print("I am Always printed")"""


# raising exception

try:
    age=int (input("Enter the age?"))
    if age<18:
        raise ValueError;
    else:
        print("the age is valid")

except ValueError:
    print("The age is not valid")



"""try:
    a = int(input("Enter a?"))  
    b = int(input("Enter b?"))  
    if b == 0:
        raise ArithmeticError;  
    else:  
        print("a/b = ",a/b)  
except ArithmeticError:  
    print("The value of b can't be 0")

finally:
    print("this is printed")"""



try:
    def msg():
        print("welcome")
except IndentationError as e:
    print(e)
except ArithmeticError:
    print("Arithmetic Exception")

else:
    print ("Successfully Done")
