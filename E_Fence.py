n,k = map(int, input().split())
h = list(map(int, input().split()))
val1 = sum(h[:k])
min1 = val1
count1 = 0
left = 0
right = k
while right < len(h):
    val1 += h[right]
    val1-= h[left]
    left +=1
    right+=1
    
    if min1 > min(min1, val1):
        min1 = min(min1, val1)
        count1 = left
print(count1 +1)        

   


