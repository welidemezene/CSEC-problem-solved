s = input()
h = "hello"
n = len(s)
i , j = 0,0

while j < n and i < len(h):
    if h[i] == s[j]:
        i+=1
        j+=1
    elif h[i] != s[j]:
        j+=1
if i == 5:
    print("YES")   
else:
    print("NO")            
