# from collections import defaultdict
# n = int(input())
# a = list(map(int,input().split()))
# nl = int(input())
# b = list(map(int,input().split()))
# le = len(b)
# freq = defaultdict(int)
# for i in range(le):
#     freq[b[i]] +=1
# # for key,value in freq.items():
# #     print(key,value)
# count1 = 0    
# for i in range(len(a)):
#     if a[i] in freq.keys():
        
#         count1+=1
#         freq[a[i]]-=1
#         if freq[a[i]] == 0:
#             del freq[a[i]]
#     elif a[i]+1 in freq.keys():
#         count1+=1
#         freq[a[i]+1]-=1
#         if freq[a[i]+1] == 0:
#             del freq[a[i]+1]
#     elif a[i]-1 in freq.keys():
#         count1+=1
#         freq[a[i]-1]-=1
#         if freq[a[i]-1] == 0:
#             del freq[a[i]-1]
# print(count1)                   

n = int(input())
a = list(map(int,input().split()))
m = int(input())
b = list(map(int,input().split()))
a.sort()
b.sort()
l=0
r=0
count1 = 0
while l < n and r < m:
    if abs(a[l]-b[r]) <= 1:
        count1+=1
        l+=1
        r+=1
    elif a[l] < b[r]:
        l+=1
    else:
        r+=1
print(count1)                
