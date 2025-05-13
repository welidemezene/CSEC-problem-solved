n = int(input())
count1 = 0
for _ in range(n):
    a,b,c = map(int, input().split())
    if sum([a,b,c]) >= 2:
        count1+=1

print(count1)        
