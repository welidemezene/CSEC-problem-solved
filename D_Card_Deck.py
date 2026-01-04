t = int(input())
for i in range(t):
    n = int(input())
    p = list(map(int,input().split()))
    prefix1 = [0]* n
    inde = 0
    for j in range(1,n):
        if p[j]>p[inde]:
            inde = j
        prefix1[j] = inde
    ans = []
    k = n-1
    while k >=0:
        target = prefix1[k]
        ans.extend(p[target:k+1])       
        k = target -1
    print(*ans)    
