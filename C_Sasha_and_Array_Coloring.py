t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    total = 0
    l = 0
    r = len(a)-1
    while l <= r:
        sum1 = min(a[l],a[r])
        sum2 = max(a[l], a[r])
        l+=1
        r-=1
        total += sum2-sum1
    print(total)    
