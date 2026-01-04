s = input()

le = len(s)
l = 0 
r = 1
max1 = 1
count1 = 1
for i in range(1,le):
    if s[i] == s[i-1]:
        count1+=1
    else:
        count1 = 1    
    max1 = max(max1,count1)    
print(max1)    
