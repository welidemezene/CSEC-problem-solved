n = int(input())
s = list(map(int,input().split()))
ones = s.count(1)
twos = s.count(2)
threes = s.count(3)
four = s.count(4)
total = four
total += threes
ones = max(0,ones-threes)
total += (twos // 2)
if twos % 2 == 1:
    total += 1
    ones = max(0, ones-2)

if ones > 0:
    ad = (ones + 3)//4
    total += ad
print(total)            