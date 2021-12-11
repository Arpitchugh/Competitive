# String In Python
# String is sequence of characters
# string is immutable(no changes)
# name='Amit'
#
# name="Amit"
#
# name='''Amit'''
#
# message="""hi Amit
#         how are you
#         doing"""


city="Mumbai is my city"
#city[0:5]="pune" # not allowed as string object is immutable

# you can change complete string but not part of string

# city="Pune is my city"
# print(city)

# ans=city.upper()
# print(ans)
#
# ans=city.lower()
# print(ans)
#
# ans=city.capitalize()
# print(ans)
#
# ans=city.find("my")
# print(ans)
#
# ans=city.replace("Mumbai","pune")
# print(ans)

# name="Amit"
# city="Mumbai"
# age=20
#
# print("My name  is {}. My city is {}. and my age is {}".format(name,city,age))

# to count number of letters in a string
# count = 0
# for i in 'Hello World':
#  if(i == 'l'):
#     count += 1
# print(count,'letters found')

s1="deepak"
# s2="mumbai"
# print(s1+" "+s2)
# print(s1*3)

# indexing and slicing
# print(s1[3])
# print(s1[1:3])
# print(s1[-1])
# print("v" in "mumbai")
# str1="mumbai"
# a=list(enumerate(str1))
# print(a)

# default(implicit) order
# default_order = "{}, {} and {}".format('John','Bill','Sean')
# print(default_order)
#
#
# # order using positional argument
# positional_order = "{1}, {0} and {2}".format('John','Bill','Sean')
# print(positional_order)
#
#
# # order using keyword argument
# keyword_order = "{s}, {b} and {j}".format(j='John',b='Bill',s='Sean')
# print(keyword_order)

# print('''welcome to 'python' "course" editor''')
#
# name="rajndra"
# print(list(name))

d1="rain is rainning and wind is blowing"
print(d1.split())

email="amit123@gmail.com"
ans=email.split('@')
print(ans[0])
print(len("deepak"))
print(' '.join(['This', 'will', 'join', 'all', 'words', 'into', 'a', 'string']))


