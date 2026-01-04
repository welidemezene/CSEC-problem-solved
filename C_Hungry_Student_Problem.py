n = int(input())
for i in range(n):
    x = int(input())
    while x >= 3 or x >= 7:
        if x < 7 and x >=3:
            x-=3
        else:
            x-=7    
    if x == 0:
        print("YES")    
    else:
        print("NO")        

    