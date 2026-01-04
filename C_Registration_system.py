from collections import defaultdict
freq = defaultdict(int)
n = int(input())
for _ in range(n):
    s = input()
    freq[s]+=1
    if freq[s]>1:
        k = freq[s]-1
        print(s+str(k))
    else:
        print("OK")    