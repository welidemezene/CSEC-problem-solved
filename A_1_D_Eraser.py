t  = int(input())
for _ in range(t):
    n,k = map(int, input().split())
    m = input()
    count1 = 0
    left = 0
    nu = len(m)
    while left < nu:
        if m[left] == "B":
            count1 +=1
            left += k
        else:
            left+=1    
            
    print(count1)        
