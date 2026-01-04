t = int(input())
for i in range(t):
    n,k,q = map(int,input().split())
    l = list(map(int,input().split()))
    day_streak = 0
    total_days = 0
    for c in l:
        if c <= q:
            day_streak +=1
            if day_streak >= k:
                total_days += (day_streak - k + 1)
        else:
            day_streak = 0
    print(total_days)                 