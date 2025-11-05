t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()

    # Count 'W' in the first window
    current_whites = s[:k].count('W')
    min_whites = current_whites

    # Slide the window
    for i in range(k, n):
        if s[i - k] == 'W':  # leaving the window
            current_whites -= 1
        if s[i] == 'W':      # entering the window
            current_whites += 1
        min_whites = min(min_whites, current_whites)

    print(min_whites)
