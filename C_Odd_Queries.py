t= int(input())
for i in range(t):
    n,q = map(int, input().split())
    a = list(map(int, input().split()))
    prefix1 = [0] * (n + 1)
    for i in range(1,n+1):
        prefix1[i] = prefix1[i-1] + a[i-1]
    for i in range(q):
        l,r,k = map(int, input().split())
        multi = (r-l+1) * k
        value1 = prefix1[r] - prefix1[l-1]
        ans = abs(multi-value1)
        
        if (ans + prefix1[-1]) % 2==0:
            print("NO")
        else:
            print("YES")     
