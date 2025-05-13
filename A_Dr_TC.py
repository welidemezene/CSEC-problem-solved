t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    total = 0
    for j in range(n):
        if s[j] == "1":
            total+=1
    sum = 0        
    for k in range(n):  
        if s[k] == "1":
            sum+= (total -1)    
        else:
            sum+= (total + 1)
    print(sum)            

    