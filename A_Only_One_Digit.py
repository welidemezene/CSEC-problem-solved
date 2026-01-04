t = int(input())
for i in range(t):
    x = int(input())
    y = str(x)
    li = []
    for c in y:
        li.append(c)
    li.sort()
    print(li[0])    
    
    