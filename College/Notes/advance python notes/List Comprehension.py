# # List comprehension Amulya and Harry
#
# # Syntax of list comprehension
# #[expression for item in iterable]
# for item in range(1,11):
#     print(item)
#
#    # or
#
# print([item for item in range(1,11)]) # shortcut

# print numbers which are divisiblle by 3

# using list comprehension
list1=[12,11,13,14,15,17,18,21,34,45]
# ans=[item for item in list1 if item%3==0]
# print(ans)

#using filter lambda
# ans=list(filter(lambda x:x%3==0,list1))
# print(ans)
#
# print([x  if x>2 else x+1 for x in range(1,11) ])
#if x is > 2 keep x at it is else add 1 to x


# #example 1:
# #mulitply each elemetn in list by 10
# num=[1,2,3,4]
# print([x*10 for x in num])

# #example 2:
# #to change case of word or alphabate
# words=["hello","a","Deepu"]
# print([x.upper() for x in words])


# #Example 3:
# #extract number or alphabates
# str1="sai12345"
# print([x for x in str1 if x.isdigit()])
# #.isdigit() extracts digit from string

# print([x for x in str1 if x.isalpha()])
# # isalpha() extracts alphabates

# # Example 4:
# # list comprehension on nested list
# list1=[[1,2,3],[4,5,6],['a','b']] # nested list
# # if you want to extract first element of each list then
# print([x[0] for x in list1])


#  Example 5
# List comprhension with function
# #
# # # function body
# def square(x):
#     return x*x
# print([square(x) for x in range(1,11)])
#  it will create list with square of nos 1 to 10

# # Example 6:
# # list comprhension to add 2 lists
# a=[1,2,3]
# b=[34,55,66]
#
# print([a[i]+b[i] for i in range(0,len(a))])






print([x for x in range(1,51) if x%2==0])


h5=[10,20,30]

print([x*5 for x in h5])

name=["amit","deepali"]

print([x.upper() for x in name])