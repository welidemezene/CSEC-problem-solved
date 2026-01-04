n = int(input())
s = list(map(int, input().split()))
c1 = s.count(1)
c2 = s.count(2)
c3 = s.count(3)
c4 = s.count(4)
taxi = c4

taxi += c3
c1 = max(0, c1-c3)

taxi += c2//2

if c2 % 2 == 1:
    c1 -= 2
    taxi +=1
if c1 > 0:
    taxi += (c1+3)//4    
print(taxi)  
