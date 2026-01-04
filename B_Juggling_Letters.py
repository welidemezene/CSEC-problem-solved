from collections import defaultdict
t = int(input())
freq = defaultdict(int)
for i in range(t):
    n = int(input())
    count1 = 0    
    
    for j in range(n):
        s = input()
        count1+= len(s)
   
        for si in s:
            
            freq[si] +=1
    
       
    y = count1//n 
    # print(y)
    for ke in freq:
        
        
        
        if freq[ke] % y != 0:
            print("NO")
            
        print("YES")
  