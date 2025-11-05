n = int(input())
v = list(map(int, input().split()))
k = sorted(v)
prefix1 = [0] * (n+1)
prefix2 = [0] * (n+1)
for i in range(1,n+1):
    prefix1[i] = prefix1[i-1] + v[i-1]
    prefix2[i] = prefix2[i-1] + k[i-1]

m = int(input())
for i in range(m):
    t,l,r = map(int, input().split())
    if t == 1:
        print(prefix1[r] - prefix1[l-1])
    else:
        print(prefix2[r] - prefix2[l-1])    

