n = int(input())
count1 = 0
while n:
    if n <= 5:
        n = n-n
        count1+=1
    elif n > 5:
        count1+=1
        n = n-5   
print(count1)         
