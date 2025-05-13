n,k = map(int,input().split())
while True and k > 0:
    if n % 10 != 0:
        n = n-1
        k-=1
    elif n %10 == 0:
        n = n//10
        k-=1
print(n)            
