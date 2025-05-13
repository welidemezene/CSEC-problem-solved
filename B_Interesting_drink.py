from bisect import bisect_right

t = int(input())
a = list(map(int, input().split()))
a.sort()  # Sort once for all future queries

n = int(input())
for _ in range(n):
    m = int(input())
    count = bisect_right(a, m)  # gives how many elements are ≤ m
    print(count)
