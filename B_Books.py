n,t = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
count1=0
sum1 = 0
for i in range(n):
    sum1+=a[i]
    if sum1<=t and i < n:
        count1+=1
    else:
        print(count1)  
        break  


