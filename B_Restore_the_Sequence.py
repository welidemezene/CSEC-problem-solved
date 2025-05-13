t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    left = 0
    right = n - 1
    while left < right:
        print(a[left], end=" ")
        print(a[right], end=" ")
        left += 1
        right -= 1
    if left == right:
        print(a[left], end=" ")
    print()
