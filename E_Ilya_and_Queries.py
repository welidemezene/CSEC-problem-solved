s = input()
list1= [0] * (len(s) + 1)
left = 0
right = 1
while right < len(s):
    if s[left] == s[right]:
        list1[left] = 1
        left+=1
        right+=1
    else:
        list1[left] = 0 
        left+=1
        right+=1  
prefix1 = [0] * (len(s) + 1)
for i in range(1,len(s) +1):
    prefix1[i] = prefix1[i-1] + list1[i-1]        
m = int(input())
for i in range(m):
    l,r = map(int, input().split())
    print(prefix1[r-1]-prefix1[l-1])
    