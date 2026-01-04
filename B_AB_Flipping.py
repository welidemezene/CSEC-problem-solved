import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input().strip())
    s = list(input().strip())

    used = [False] * (n - 1)  # used[i] = whether index i (swap between i and i+1) was used
    ans = 0
    i = 0
    while i < n - 1:
        # if this index hasn't been used and currently is "AB", we can swap
        if (not used[i]) and s[i] == 'A' and s[i+1] == 'B':
            # do swap
            s[i], s[i+1] = s[i+1], s[i]
            used[i] = True
            ans += 1
            # after a swap, check the previous index (if any) because new "AB" may appear there
            if i > 0:
                i -= 1
            else:
                i += 1
        else:
            i += 1

    print(ans)
