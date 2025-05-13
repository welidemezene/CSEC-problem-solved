# n = int(input())
# for i in range(1,n):
#     for j in range(1,i+1):
#         print(j, end= ' ')
#     print()  
# 

# n = int(input())  
# for i in range(n):
#     for j in range(n-i):
#         print("*", end = " ")
#     print()    

# from collections import defaultdict
# n = input()

# dict1  =  defaultdict(int)
# for cha in n:
#     dict1[cha] +=1
# for ch in dict1:
#     print(f"{ch} occurs {dict1[ch]} times")   
# 

# a = list(map(int, input().split()))
# n = len(a)
# target = int(input())

# for i in range(n):
#     for j in range(i+1, n):
#         if a[i] + a[j] == target:
#             print(f"pair found: ({a[i]}, {a[j]})")

