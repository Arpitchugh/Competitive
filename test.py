nums=[1,2,3,3,4]

def remove_duplicates(nums):
    # return list(set(num))
    l,h = 1,len(nums)-1
    while l<h:
        m = (l+h)//2
        count = sum(num<=m for num in nums)
        if count <= m: l=m+1
        else: h=m
    return l

print(remove_duplicates(nums))