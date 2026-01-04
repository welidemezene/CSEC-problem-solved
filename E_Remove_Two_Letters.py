# import sys

# input = sys.stdin.read
# data = input().split()

# t = int(data[0])
# idx = 1
# results = []

# for _ in range(t):
#     n = int(data[idx]); idx += 1
#     s = data[idx]; idx += 1
    
    
#     answer = n - 1
    
   
#     for i in range(n - 2):
#         if s[i] == s[i + 2]:
#             answer -= 1
    
#     results.append(str(answer))

# print("\n".join(results))


# t = int(input())
# for _ in range(t):
#     n = int(input())
#     s = input()
#     ans = n-1
#     for i in range(n-2):
#         if s[i]==s[i+2]:
#             ans -=1
#     print(ans)  
# 
# 
import sys
input = sys.stdin.read

data = input().split()

t = int(data[0])
idx =1
list1 = []
for _ in range(t):
    n = int(data[idx])
    idx+=1
    s = data[idx]
    idx+=1
    ans = n-1
    for i in range(n-2):
        if s[i]==s[i+2]:
            ans-=1
    list1.append(str(ans))     
print("\n".join(list1))    


