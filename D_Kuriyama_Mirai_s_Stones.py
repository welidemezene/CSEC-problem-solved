n = int(input())
a = list(map(int, input().split()))
prefix = [0] * (n +1)
prefix1 = [0]  * (n +1)
for i in range(n):
    prefix[i+1] = prefix[i] + a[i]
a.sort()
for i in range(n):
    prefix1[i+1] = prefix1[i] + a[i]
m = int(input())
for i in range(m):
    t,o,tw = map(int, input().split())
    if t == 1:
        w = prefix[tw] - prefix[o-1]
        print(w)
    else:
         g = prefix1[tw] - prefix1[o-1]
         print(g)


