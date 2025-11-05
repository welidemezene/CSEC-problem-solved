n,m = map(int, input().split())
a = list(map(int, input().split()))
list1 = [0] * n
list2 = [0] * n
list3=[]
left = 0
right = 1
while right < n:
    if a[left] > a[right]:
        list1[left] = a[left] - a[right]
        left+=1
        right+=1
    else:
        list2[left] = a[right] - a[left]
        left+=1
        right+=1

prefix1 = [0] * n
prefix2 = [0] * n
for i in range(1,n):
    prefix1[i] += prefix1[i-1] + list1[i-1]
    prefix2[i] += prefix2[i-1] + list2[i-1]


for i in range(m):
    s,t = map(int, input().split())      
    if s>t:
        print(prefix2[s-1]-prefix2[t-1])  
    else:
        print(prefix1[t-1]-prefix1[s-1])      