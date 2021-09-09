# in loop process of travelling from one element to another is called as iteration.

# k=[1,3,4,"deepu"]
# for i in k:
#     print(i)

# to write program without for loop there are 2 methods
#     1. indexing (indexing will work for sequesnces but not for set and dictionaries)
# as set and dictionaries are unordered and there is no index

# fruits=["apple","mango","grapes"] # list
# i=0
# while i<len(fruits):
#     print(fruits[i])
#     i=i+1
# # in above exapmle indexing used but its not allowed in set and dictionary
# fruits1={"apple","mango","grapes"} # set
# i=0
# while i<len(fruits1):
#     print(fruits1[i])
#     i=i+1
    # indexing not allowed
    # error 'set' object is not subscriptable
    # but for loop will work for all (set and dict also)

# list1=[12,44,'seema']
# for i in list1:
#     print(i)

#iterables (here list1 is  called as iterables as we can use loop over list1)
#iterables gives us iterators .
#iterators gives use next element available in iterables
#iterables called built in function called iter which will give iterators as output
#and that iterator will give us next value of list or tuple.
# iter(list1)  # list1 is called as iterable
# above code will give list iterable object
# iterator=iter(list1) # iterator is variable name here
# print(next(iterator)) # first value of list is displayed
# print(next(iterator))
# print(next(iterator))
# print(next(iterator)) # stop iteration
# in this way for loop work internally


color=["red","orange"]
# for i in color:
#      print(i)

# now same program without for loop
def p(iterable):
    iterator=iter(iterable)
    while True:
        try:
            item=next(iterator)
        except StopIteration:
            break
        else:
            print(item)


p(["red","orange","purple"])
# function called



