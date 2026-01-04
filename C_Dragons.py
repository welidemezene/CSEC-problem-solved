s,n = map(int,input().split())
check = False
list1 = []
for i in range(n):
    x,y = map(int,input().split())
    list1.append([x,y])
list1.sort(key=lambda x: x[0])    


for i in range(n):
    if s > list1[i][0]:
        s += list1[i][1]
    else:
        check = True    

    

if check:
    print("NO")
else:
    print("YES")               