try:
    file=open("abc.txt","r")
except EOFError as e:
    print("EOFError")
except IOError as e:
    print("IOError")
else: # will be executed only if there is no exception(error)
    print("ok")
finally:
    print("This will printed always")

