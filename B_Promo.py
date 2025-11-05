n,q = map(int, input().split())
p = list(map(int, input().split()))
p.sort(reverse=True)
prefix1= [0] * (n+1)
for i in range(1,n+1):
    prefix1[i] = prefix1[i-1] + p[i-1]
for i in range(q):
    x,y = map(int, input().split())
    print(prefix1[x] - prefix1[x-y])    