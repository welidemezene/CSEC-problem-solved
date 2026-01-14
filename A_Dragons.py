s,n = map(int,input().split())
stack = []
for i in range(n):
    x,y = map(int,input().split())
    stack.append((x,y))
stack.sort()
# print(stack)

check = True

for x,y in stack:
    
    if x < s:
        s+=y
    else:
        check = False
        break

if check:
    print("YES")
else:
    print("NO")            

