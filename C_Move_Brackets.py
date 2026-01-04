t = int(input())
for i in range(t):
    n = int(input())
   
    a = input().strip()
    ans = 0
    b = 0
    for s in a:
        if s == "(":
            b+=1
        else:
            b-=1
            if b < 0:
                ans+=1
                b=0
    print(ans)                
