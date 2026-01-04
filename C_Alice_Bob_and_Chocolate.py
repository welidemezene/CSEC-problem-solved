n = int(input())
a = list(map(int,input().split()))
sum1 = a[0]
sum2 = 0
count1 = 1
count2 = 0

l = 1
r = n-1  
while l <= r:
    if sum1 <= sum2:
        sum1+=a[l]
        l+=1
        count1+=1
    elif sum1 > sum2:
        sum2+=a[r]
        r-=1
        count2+=1
print(count1,count2)

