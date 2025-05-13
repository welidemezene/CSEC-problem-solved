n,k = map(int, input().split())
m = list(map(int, input().split()))
h = m[k-1]
count1 = 0
for i in range(n):
    if m[i] >= h and m[i] > 0:
        count1+=1
print(count1)        