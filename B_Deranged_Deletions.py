t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    found = False
    # Try to find any inversion: a[i] > a[j]
    for i in range(n):
        for j in range(i + 1, n):
            if a[i] > a[j]:
                print("YES")
                print(2)
                print(a[i], a[j])
                found = True
                break
        if found:
            break

    if not found:
        print("NO")
