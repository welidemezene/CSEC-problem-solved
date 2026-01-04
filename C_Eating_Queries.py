from bisect import bisect_left

t = int(input())
for _ in range(t):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    
    a.sort(reverse=True)

    
    prefix = []
    s = 0
    for x in a:
        s += x
        prefix.append(s)

    
    for _ in range(q):
        x = int(input())
        idx = bisect_left(prefix, x)
        if idx == n:
            print(-1)
        else:
            print(idx + 1)
