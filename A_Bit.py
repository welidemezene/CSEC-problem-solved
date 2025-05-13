n = int(input())
count =0
for i in range(n):
    m = input()
    if "++" in m:
        count+=1
    elif "--" in m:
        count-=1
print(count)            
