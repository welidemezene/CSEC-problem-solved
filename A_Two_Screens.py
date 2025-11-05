q = int(input())
for i in range(q):
    s = input()
    t = input()
    sl = len(s)
    tl = len(t)
    left = 0
    right = 0
    count1 = 0
    if s[0] == t[0]:
        count1+=1
    else:
        count1 += 0     
    while left < sl and right < tl:
        if s[left] == t[right]:
            count1+=1
            left+=1
            right+=1
        else:
            break
              
        
    count1+= (sl-left) + (tl-right)
    print(count1)
            


