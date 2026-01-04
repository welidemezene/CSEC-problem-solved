t = int(input())
for _ in range(t):
    count1 = 0
    sum1 = 0
    n,x = map(int,input().split())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    for i in range(len(a)):
        sum1+=a[i]
        if sum1/(i+1) >= x:
            count1+=1
        else:
            break    
    print(count1)    


