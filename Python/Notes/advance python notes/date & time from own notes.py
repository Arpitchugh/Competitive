from datetime import *
#
# # # used to display current date and time
# # da=datetime.now()
# # print(da)
# #
# # # to display todays date only
# # da1=date.today()
# # print(da1)
#
# to display structure of datetime module

print(dir(datetime))

# to convert to date format
d=date(2020,8,7)
print(d)


t=date.fromtimestamp(600.9040203)
print(t)
#
# # from  time import *
# # c=time()
# # print(c)
#
da1=date.today()
print(da1)
print("Year",da1.year)
print("Month",da1.month)
print("Day",da1.day)
#
c=time(11,22,34)
print(c)
print(c.hour)
print(c.minute)
print(c.second)
#
# t1 = date(year = 2018, month = 7, day = 12)
# t2 = date(year = 2017, month = 12, day = 23)
# t3 = t1 - t2
# print("t3 =", t3)
# #
# print("type of t3 =", type(t3))
#
# # t1 = timedelta(weeks = 2, days = 5, hours = 1, seconds = 33)
# # t2 = timedelta(days = 4, hours = 11, minutes = 4, seconds = 54)
# # t3 = t1 - t2
# #
# # print("t3 =", t3)
#
# # t1 = timedelta(seconds = 33)
# # t2 = timedelta(seconds = 54)
# # t3 = t1 - t2
# # print("t3 =", t3)
# # print("t3 =", abs(t3))
#
# current date and time
n = datetime.now()
print(n)
t = n.strftime("%H:%M:%S")
print("time:", t)

n = datetime.now()
print(n)

s1 = n.strftime("%d/%b/%Y, %H:%M:%S")
# mm/dd/YY H:M:S format
print("s1:", s1)
# #
s2 = n.strftime("%d/%m/%Y, %H:%M:%S")
# dd/mm/YY H:M:S format
print("s2:", s2)

# strptime converts your date to string format

# da = "21 June, 2018"
# print("da =", da)
# 
# ans = datetime.strptime(da, "%d %B, %Y")
# print("date_object =", ans)

# sleep used to stop program execution for sometime
# import time
# for i in range(11):
#     print(i)
#     time.sleep(3)

from  time import *
c=time()
print("present time",c)

# for i in range(100000):
#     print (i,end= " ")
#
#     c1=time()
#
# print("After loop  time", c1)
# net_time=c1-c
# print("Net time is ",net_time," seconds")

n=datetime.now()
print(n)
ans=n.strftime("%X")
print(ans)




a=[12,10,15,23,24,25,30]