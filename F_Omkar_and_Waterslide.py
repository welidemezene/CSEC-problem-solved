t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    count1 = 0
    for j in range(1,n):
        if a[j-1] > a[j]:
            count1 += (a[j-1] - a[j])

            
    print(count1)        




