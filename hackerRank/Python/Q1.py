T = input("")
for i in T:
    length = input("")
    goodness = input("")
    string = input("")
    num = 0
    for num in string:
        if string[0] == string[-1]:
            num = num+1
        a = goodness-num
        if a<= 0:
            print('case #',num,': ',0)
        else:
            print('case #',num,': ',0)



