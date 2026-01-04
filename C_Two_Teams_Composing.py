from collections import defaultdict

t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    freq = defaultdict(int)
    for s in a:
        freq[s]+=1
    value1 = max(freq.values())  
    value2 = len(freq)
    min1 = min(value1-1, value2)
    min2 = min(value1, value2-1)
    max1 = max(min1,min2)

    print(max1)

