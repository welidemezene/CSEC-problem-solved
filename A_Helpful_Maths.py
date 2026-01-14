# n = input()
# result = n.replace("+", "")
# m = len(result)


# result = sorted(result)
# for i in range(m):
#     if i < (m-1):
#         print(result[i] + "+", end= '')
# print(result[m-1])    
# 

# n = int(input())
# for i in range(1,n+1):
#     print(' ' * (n-i) ,end=" ")    
#     print('*' * (2*i-1))
        

# n = int(input())
# n = n+1
# check = True
# while check:
#     n = n+4
#     n = str(n)
#     sum1 = 0
#     for ch in n:
#         sum1+= int(ch)
#     if int(n) % 4 == 0:
#         print(n)    
#         check = False



# n = list(map(int, input()))       
# b = int(input())
# n.sort()
# sum1 = 0
# count = 0
# for i in range(len(n)):
#     sum1+= n[i]
#     count +=1
#     while sum1 > b:
#         print(count)





s = input().split('+')
s.sort()
print('+'.join(s))