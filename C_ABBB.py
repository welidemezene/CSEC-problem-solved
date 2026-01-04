# t = int(input())
# for i in range(t):
#     s = input()
#     l = 0
#     r = 1
#     len1 = len(s)
#     count1 = len1
#     while r < len1:
#         if s[l] == "A" and s[r] == "B":
#             count1-=2
#             if l >= 1 and r < len1-1:
#                 if s[l-1] == "A" and s[r+1] == "B":
#                     count1-=2
#                     r+=1
#                 elif s[l-1] == "B" and s[r+1] == "B":
#                     count1-=2
#                     r+=1
#             l = r+1
#             r= r+2    
#         elif s[l] == "B" and s[r]=="B":
#             count1-=2
#             if l >= 1 and r < len1-1:
#                 if s[l-1] == "A" and s[r+1] == "B":
#                     count1-=2
#                     r+=1
#                 elif s[l-1] == "B" and s[r+1] == "B":
#                     count1-=2
#                     r+=1
#             l = r+1
#             r = r+2    
#         else:
#             l+=1
#             r+=1        
        
#     print(count1)          


t = int(input())
for i in range(t):
    s = input()
    stack = []
    for char in s:
        if stack and char == "B":
            stack.pop()
        else:
            stack.append(char)  
    print(len(stack))          



