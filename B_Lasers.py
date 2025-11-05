t = int(input())

for _ in range(t):
    count1 = 0
    n,m,x,y = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    for i in range(n):
        if a[i] < x:
            count1+=1
    for j in range(m):
        if b[j] < y:
            count1+=1
    print(count1)                 
