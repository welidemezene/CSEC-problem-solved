import sys

# Fast I/O
input = sys.stdin.readline

def solve():
    t = int(input())
    for _ in range(t):
        s = input().strip() # .strip() is important to remove newline characters
        n = len(s)
        
        # 1. Pre-calculate totals
        total_zeros = s.count('0')
        total_ones = s.count('1')
        
        # Initialize counts of what we have seen so far (Prefix counts)
        pref_zeros = 0
        pref_ones = 0
        
        # Initialize answer with the cost of making the WHOLE string 0s or WHOLE string 1s
        # (This covers the edge cases where the split is at the very start or end)
        ans = min(total_zeros, total_ones)
        
        # 2. Iterate through the string (The "Moving Split Point")
        for char in s:
            # Update prefix counts
            if char == '0':
                pref_zeros += 1
            else:
                pref_ones += 1
            
            # Calculate what remains on the right side (Suffix counts)
            suff_zeros = total_zeros - pref_zeros
            suff_ones = total_ones - pref_ones
            
            # Option 1: Form 000...111
            # Left part needs to be 0s -> We must flip all 1s in the prefix
            # Right part needs to be 1s -> We must flip all 0s in the suffix
            cost_01 = pref_ones + suff_zeros
            
            # Option 2: Form 111...000
            # Left part needs to be 1s -> We must flip all 0s in the prefix
            # Right part needs to be 0s -> We must flip all 1s in the suffix
            cost_10 = pref_zeros + suff_ones
            
            # Update the global minimum
            ans = min(ans, cost_01, cost_10)
            
        print(ans)

solve()