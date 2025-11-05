t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    
    pos_n = p.index(n)
    
    # Check increasing from 0 to pos_n
    inc_ok = True
    for i in range(1, pos_n):
        if p[i] < p[i-1]:
            inc_ok = False
            break
    
    # Check decreasing from pos_n to n-1
    dec_ok = True
    for i in range(pos_n + 1, n):
        if p[i] > p[i-1]:
            dec_ok = False
            break
    
    if inc_ok and dec_ok:
        print("YES")
    else:
        print("NO")