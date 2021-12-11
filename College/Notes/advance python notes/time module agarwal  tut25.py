#  epoc : 1 jan 1970 12 am
# # end 31 dec 2038
#

from time import *
# c=time()  #gives seconds from epoc to today
# print(c)
#
# d=gmtime() # gives nine attributes as per UTC time
# print(d)
#
# e=localtime() # gives local tme of our zone tm-isdst=0 means daylight saving off
# print(e)
#
# f=asctime()
# print(f)
# #
# g=ctime() #same as asctime
# print(g)


# #  #u can convert gmtime to asctime as
# #
# t=gmtime()
# f=asctime(t) # here d is gmtime
# print(f)
# #
# time module commands
# time()
# gmtime()
# localtime()
# asctime()

from datetime import *
#
a=datetime.now()
print(a)
a=datetime.today()
print(a)
a1=date.today()
print(a1)


from time import *

i=0
while i<=10:
    i=i+1
    print(i)
    sleep(3)


for x in range(10):
    print(x)
    sleep(1)
