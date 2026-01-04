
t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    i ,j = 0,1
    while i < n-1:
        if (a[j]-a[i]) > 1:
            print("NO")
            break
        i +=1
        j+=1 
    if j == n:    
     print("YES")       

    