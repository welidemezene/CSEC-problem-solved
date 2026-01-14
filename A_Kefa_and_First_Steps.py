n = int(input())
a = list(map(int,input().split()))
j = 1 
max1 = 0
count1 = 0
if n <= 1:
    print(1)
    exit()
for i in range(n-1):
    if a[i]<= a[j]:
        j+=1
        count1+=1
    else:
        
        count1=0
        j+=1    
    max1 = max(max1,count1+1)    
print(max1)        

