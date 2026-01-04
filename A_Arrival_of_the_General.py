n = int(input())
a = list(map(int, input().split()))

lindex = a.index(max(a))
rindex = n - 1 - a[::-1].index(min(a))

if lindex > rindex:
    x = (n-rindex-1) + (lindex)
    print(x - 1)
else:
    y = (n-rindex-1) + (lindex)    
    print(y)
