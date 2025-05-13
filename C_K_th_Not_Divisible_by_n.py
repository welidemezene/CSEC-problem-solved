t = int(input())
for i in range(t):
    n,k = map(int, input().split())
    s = (k-1)//(n-1)
    print(k+s)