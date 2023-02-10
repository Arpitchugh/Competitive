# Given an array Arr of size N containing positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.


def findMaxSum(arr, n):
    inc = arr[0]
    exc = 0
    for i in range(1, n):
        new_exc = max(inc, exc)
        inc = exc + arr[i]
        exc = new_exc
    return max(inc, exc)

arr = [5, 5, 10, 100, 10, 5]
n = len(arr)
print(findMaxSum(arr, n))