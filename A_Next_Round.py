n,k = map(int, input().split())
m = list(map(int, input().split()))
h = m[k-1]
count2 = 0
for i in range(n):
    if m[i] >= h and m[i] > 0:
        count2+=1
print(count2)        