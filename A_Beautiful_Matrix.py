for i in range(5):
    a = list(map(int, input().split()))
    for j in range(5):

        if a[j] == 1:
            row = i
            col = j
            
m = abs(row-2) + abs(col-2)        
print(m)

# for i in range(5):
#     for j in range(5):
#         a = int(input())
#         if a == 1:
#             row = i
#             col = j
# print(abs(2-i) + abs(2-j))


