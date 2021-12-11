# Amulya Video NO 20

#List comprhension ..A substitute for for loop long code example

list1=[]
for x in range(1,11):
    list1.append(x)

print(list1)

#the above code can be written in single line using list comprehension

print([x for x in range(1,11)])

# Note: list comprhension is faster than for loop execution

#List comprehension ...Substitute for Lambda and map function example

list2=[1.2,2.3,4.5] # floating point values in list
# # now we want to convert this list to integer list using map and lambda
# a=list(map(lambda x:int(x),list2))
# print(a)
#
# # instead of above code we can use list comprehension
# [int(x)for x in list2]

#compariosn for time taken by lambda map & list comprehension method
# import timeit
# print(timeit.timeit('list(map(lambda x:int(x),[1.2,2.3,4.5]))'))
# print(timeit.timeit('[int(x)for x in [1.2,2.3,4.5]]'))

#in above example time taken by list comprhension is less as compared to lambda map

#List comprehension ...Substitute for Lambda and Filter function example

# following filter function will print even number between 1 to 10 using labda and filter
# a=list(filter(lambda x:x%2==0,range(1,11)))
# print(a)

# instead of above code we can use list comprehension
#
# print([x for x in range(1,11) if x%2==0])


#List comprehension ...Substitute for reduce function

#reduce function is used to reduce iterables to single element
#suppose u want to add all elemnts in list we can use reduce function

# to use reduce function u have to import functools

# import functools
# a=functools.reduce(lambda x,y:x+y,[1,2,3,4,5])
# print(a)
#
# # instead of above code we can use list comprehension
#
# b=sum([x for x in [1,2,3,4,5]])
# print(b)