import math
t = int(input())
for i in range(t):
    s = int(input())
    x = math.isqrt(s)
    if x * x != int(s):
        print(-1)
        
    else:
        print("0","", x)
    

