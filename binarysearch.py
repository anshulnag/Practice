from array import *

arr = array("i", [])
n = int(input("Enter the size\n"))
print("Enter the values")
for i in range(n):
    x = int(input())
    arr.append(x)
print(arr)
y = int(input("Enter value to be searched\n"))


def search(arr, y):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = int(start + (end - start) / 2)
        if y == arr[mid]:
            return mid
        if arr[0] < arr[len(arr) - 1]:
            if y < arr[mid]:
                end = mid - 1
            else:
                start = mid + 1
        if arr[0] > arr[len(arr) - 1]:
            if y > arr[mid]:
                end = mid - 1
            else:
                start = mid + 1
    if start > end:
        return -1
    if arr[start] == y:
        return start
    else:
        return -1


x = search(arr, y)
print(x)
