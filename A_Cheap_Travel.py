n,m,a,b = map(int, input().split())


if m*a > b:
    s = n//m
    mul = s * b
    k = n - s *m
    print(mul + min(a  * k, b))
else:
    print(n*a)
    
    


    
    
    
    