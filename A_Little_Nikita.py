t = int(input())
for i in range(t):
    n,m = map(int,input().split())
    if n < m:
        print("No")
    elif n >= m:
        if n == m:
            print("Yes")
        elif (n-m) % 2 == 0:
            print("Yes")
        else:
            print("No")    
    