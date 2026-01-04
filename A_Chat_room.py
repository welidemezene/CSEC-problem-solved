s = input()
c = "hello"
le = len(s)
l = 0
r = 0
check = True
while r < le:
    if s[r] == c[l]:
        l+=1
        r+=1
    else:
        r+=1
    if l == 4:
        check = False
        break
if check:
    print("NO")
else:
    print("YES")    