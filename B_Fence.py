n,k = map(int, input().split())
h = list(map(int, input().split()))
min_s = float('inf')
sum_1 = 0
index1 = 0
start = 0
for end in range(n):
    sum_1 += h[end]
    if end - start +1 == k:
        if sum_1 < min_s:
            min_s = sum_1
            index1 = start
        sum_1 -= h[start]
        start+=1
print(index1+1)        
          
