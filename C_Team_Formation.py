n = int(input())
a = list(map(int, input().split()))
a.sort()
l = 0
r = 1
sum1 = 0
while r < n:
    sum1+= (a[r] - a[l])
    l+=2
    r+=2
print(sum1)    
