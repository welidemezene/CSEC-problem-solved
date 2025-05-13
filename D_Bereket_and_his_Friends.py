s = input()
n = len(s)

prefix = [0] * (n+1)
for i in range(1,n):
    if s[i-1] == s[i]:
        prefix[i] = 1
  
prefix1 = [0] * (n+1)  
for i in range(1,len(prefix)):
    prefix1[i] = prefix1[i-1] + prefix[i]    
   

m = int(input())
for i in range(m):
    l,r = map(int, input().split())
    count1 = prefix1[r-1] - prefix1[l-1]
    print(count1)
    
   
    
   

