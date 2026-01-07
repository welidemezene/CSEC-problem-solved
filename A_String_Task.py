# s = input()
# s = s.lower()
# seen = set("aoyeui")
# substr = ""
# for ch in s:
#     if ch not in seen:
#         substr += ch
# for ch in substr:
#     print("."+ch, end="")      



s = input()
le = len(s)
v = "aoyeui"
stack = []
for n in s:
    if n.lower() not in v:
        stack.append("." + n.lower())
ans = "".join(stack)        
print(ans)

   
