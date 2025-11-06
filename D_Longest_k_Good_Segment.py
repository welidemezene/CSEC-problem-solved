from collections import defaultdict

n, k = map(int, input().split())
a = list(map(int, input().split()))

freq = defaultdict(int)
left = 0
max_len = 0
ans_l, ans_r = 0, 0

for right in range(n):
    freq[a[right]] += 1
    
    while len(freq) > k:
        freq[a[left]] -= 1
        if freq[a[left]] == 0:
            del freq[a[left]]
        left += 1
    
    # Update answer if this window is longer
    if right - left + 1 > max_len:
        max_len = right - left + 1
        ans_l, ans_r = left, right

print(ans_l+1, ans_r+1)
