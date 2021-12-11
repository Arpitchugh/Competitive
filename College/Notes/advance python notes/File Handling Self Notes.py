
# to open file in read mode...check its opened or not ..then close file
# fileptr=open("abcd.txt","r")
# if fileptr:
#     print("file opened properly")
# fileptr.close()


# how to read a file by read() method
# file=open("abcd.txt","r")
# content=file.read(12)
# print(content)
# file.close()

# to read a file line wise by readline() method
# file=open("abcd.txt","r")
# content=file.readline()
# content=file.readline()
# print(content)
# file.close()

# to read whole file by looping
# file=open("abcd.txt","r")
# for x in file:
#     print(x)
# file.close()


# to read a file (in append and write mode)
# append will add newtext at end of old text
# write will remove old text totally and will print new twxt only.

# a=open("abcd.txt","w")
# a.write("this text is of new file . How are you doing.")
# a.close()

# to open a new file
# w or a
# a=open("saibaba.txt","w")
# if a:
#     print("file opened")
# a.close()
# # x
#
# a=open("saibaba12.txt","x")
# if a:
#     print("file opened")
# a.close()



# with open("saibaba.txt",'r') as f:
#     content = f.read();
#     print(content)
#
# f=open("saibaba.txt","r")
# print(f.tell())
# c=f.read()
# print(c)
# print(f.tell())
# f.close()



fileptr = open("saibaba.txt", "r")
print("The filepointer is at byte :", fileptr.tell())
fileptr.seek(20);
print("After reading, the filepointer is at:", fileptr.tell())


"""create text file called data.txt. read the file and display content.
write a file in append mode and add your name .
create new file called mumbai.txt using (x).and display its content."""
with ...file raj.txt
tell
read
tell
seek 12 characters forward
tell











