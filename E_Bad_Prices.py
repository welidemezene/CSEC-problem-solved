t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    min1 = 1000000
    count1 = 0
    for j in reversed(range(n)):
        min1 = min(min1,a[j])
        if min1 < a[j]:
            count1+=1
    print(count1)        
