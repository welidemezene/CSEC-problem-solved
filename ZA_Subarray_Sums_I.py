n,x = map(int, input().split())
a = list(map(int, input().split()))
l,sum1,count1 = 0,0,0
for i in range(n):
    sum1+=a[i]
    while sum1 > x:
        sum1-=a[l]
        l+=1
    if sum1 == x:
        count1+=1
print(count1)            