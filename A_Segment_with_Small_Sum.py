n,s = map(int , input().split())
a = list(map(int , input().split()))
left , right = 0,0
max1 = 0
sum1 = 0
while right < n:
    sum1 += a[right]
    while sum1 > s:
        sum1 -= a[left]
        left +=1
    max1 = max(max1, right-left +1 ) 
    right +=1
print(max1)       

