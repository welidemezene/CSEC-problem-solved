from collections import Counter

n= int(input())
for i in range(n):
    m = int(input())
    a = list(map(int, input().split()))

    s = Counter()
    for i, value in enumerate(a):
        s[a[i]] +=1
        if value >=3:
            print(a[i])
            break
        else:
            print("-1")
            break
    




