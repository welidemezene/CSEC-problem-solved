n = int(input())
if n !=1:
    print(n , end=' ')
while n != 1:
    if n%2==0:
        n //=2
        
    elif n%2 ==1:
        n = (n*3) +1 
        
    print(n, end= ' ')      


def binarysearch(arr, target):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right)//2
        if target == arr[mid]:
            return mid
        elif arr[mid] > target:
            right = mid -1
        else:
            left = mid + 1  
    return -1          

