a = input()
stack = []
for s in a:
    if stack and stack[-1] == s:
        stack.pop()
    else:
        stack.append(s)
if not stack:
    print("Yes")
else:
    print("No")             
