
h1=[1,2,3,4]
# sq=[]
# for x in h1:
#     sq.append(x**2)
# print(sq)

# same program using map & lambda function

# ans=list(map(lambda x:x*x,h1))
# print(ans)

#same program using map & normal function
# def sq(x):
#     return x**2
#
# ans=list(map(sq,h1))
# print(ans)

# using list comprehension
# ans=[x**2 for x in h1]
# print(ans)

# h1=[4,5,6,8,1]
# h2=[1,2,3,4,1]
#
# ans=[h2[i]+h1[i] for i in range(0,len(h2))]
# print(ans)



# adding 2 lists
"""h1=[4,5,6,8,79]
h2=[1,2,3,4,55]
ans=list(map(lambda x,y:x+y,h1,h2))
print(ans)

h1=[4,5,6,8,79]
h2=[1,2,3,4,55]

def add(x,y):
    return x+y

ans=list(map(add,h1,h2))
print(ans)"""


# adding 10 to each list items using list comprhension
# print([x+10 for x in h1])


#Filter function
# to print negative number only from list
# h1=[1,2,3,4,-34,-45,55,-99]
# ans=list(filter(lambda x:x<0,h1))
# print(ans)

# To print odd numbers only in list (filter)
# h2=[1,3,2,4,5,6,8]
# ans=list(filter(lambda x:x%2==0,h2))
# print(ans)

# # using filter create list of even numbers
# h2=[1,2,3,4,5,6,7,8,9]
# a=list(filter(lambda x:x%2==0,h2))
# print(a)


# reduce function
h2=[1,2,3,4,5]
from functools import reduce
ans=reduce(lambda x,y:x+y,h2)
print(ans)

# h1=[1,2,4,66,8,5,44,2,44,3]
# d1=list(filter(lambda x:x%2==0,h1))
# print(d1)


# Lambda

# ans=lambda x:x**2
# print("square is ",ans(6))

# a=lambda x,y:x+y
# print(a(12,34))
#




# reduce function
# python code to demonstrate working of reduce()

# importing functools for reduce()
import functools

# initializing list
lis = [ 1 , 3, 5, 6, 2, ]

# using reduce to compute sum of list
print ("The sum of the list elements is : ",end="")
print (functools.reduce(lambda a,b : a+b,lis))

# using reduce to compute maximum element from list
print ("The maximum element of the list is : ",end="")
print (functools.reduce(lambda a,b : a if a > b else b,lis))

#  reduce() vs accumulate()


#reduce() is defined in “functools” module,
#accumulate() in “itertools” module.

"""reduce() stores the intermediate result and only returns the 
final summation value. Whereas, 
accumulate() returns a iterator  containing the intermediate results.
 The last number 
of the iterator returned is summation value of the list."""

# python code to demonstrate summation
# using reduce() and accumulate()

# importing itertools for accumulate()
import itertools

# importing functools for reduce()
import functools

# initializing list
lis = [ 1, 3, 4, 10, 4 ]

# priting summation using accumulate()
print ("The summation of list using accumulate is :",end="")
print (list(itertools.accumulate(lis,lambda x,y : x+y)))

# priting summation using reduce()
print ("The summation of list using reduce is :",end="")
print (functools.reduce(lambda x,y:x+y,lis))
