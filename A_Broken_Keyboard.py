t = int(input())
for _ in range(t):
    s = input().strip()
    working = set()
    i = 0
    while i < len(s):
        # check if we have a pair like 'cc'
        if i + 1 < len(s) and s[i] == s[i + 1]:
            # skip both, means maybe malfunctioning
            i += 2
        else:
            # single character, must be working
            working.add(s[i])
            i += 1
    print(''.join(sorted(working)))
