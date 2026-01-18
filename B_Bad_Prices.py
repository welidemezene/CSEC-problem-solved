t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    min1 = a[n-1]
    count1 = 0
    for j in range(n-2,-1,-1):
        if a[j] > min1:
            count1+=1
        else:
            min1 = a[j]    
    print(count1)        

