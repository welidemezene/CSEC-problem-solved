import sys

def solve():
    # Use fast I/O
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    pointer = 1
    
    for _ in range(t):
        n = int(input_data[pointer])
        a = list(map(int, input_data[pointer+1 : pointer+1+n]))
        pointer += n + 1
        
        evens = 0
        odds = 0
        for x in a:
            if x % 2 == 0:
                evens += 1
            else:
                odds += 1
        
        # Case 1: If count of evens is even, then odds must be even too (since n is even)
        # We can just pair evens with evens and odds with odds.
        if evens % 2 == 0:
            print("YES")
        else:
            # Case 2: We have an odd number of evens and odds.
            # We only need to find ONE pair with a difference of 1.
            a.sort()
            has_diff_one = False
            for i in range(n - 1):
                if a[i+1] - a[i] == 1:
                    has_diff_one = True
                    break
            
            if has_diff_one:
                print("YES")
            else:
                print("NO")

solve()