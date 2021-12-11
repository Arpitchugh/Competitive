# Generator function is a function which return  GENERATOR=ITERATOR
# with the help of Yield Keyword.
# Generator function generates iterator
# yield: like return keyword in normal function

# def fib(mymax):
#     a,b=0,1
#     while True:
#         c=a+b
#         if c<mymax:
#             print("Before Yield")
#             yield c
#             print("After yield")
#             a=b
#             b=c
#         else:
#             break
#
# generator=fib(4)  # above function called
# print(generator) # generator object created
# print(next(generator))
# print(next(generator))
# print(next(generator))
# print(next(generator))

# when generator object created above fib function
# will start execution and will stop execution once
# it reaches yield. it will start execution again after yield when
# we use next(generator)classmethod

#"integer is not iterable"
#string is iterable
num=123 # not possible as integer is not iterable(int object is not iterable)
a=iter(num)
print(next(a))
print(next(a))
print(next(a))

# num="deepak"
# a=iter(num)
# print(next(a))
# print(next(a))
# print(next(a))