import sys

# Fast I/O is good practice for Codeforces
input = sys.stdin.readline

def solve():
    # Read Alice's segment
    l, r = map(int, input().split())
    # Read Bob's segment
    L, R = map(int, input().split())

    # 1. Find the intersection of the two segments
    inter_start = max(l, L)
    inter_end = min(r, R)

    # 2. Case: Disjoint (They don't touch at all)
    # Example: [1, 2] and [3, 4]
    if inter_start > inter_end:
        print(1)
        return

    # 3. Case: Overlap
    # Start with doors strictly inside the intersection
    ans = inter_end - inter_start
    
    # Check if we need to lock the LEFT boundary
    # If the combined range starts earlier than the intersection
    if min(l, L) < inter_start:
        ans += 1
        
    # Check if we need to lock the RIGHT boundary
    # If the combined range ends later than the intersection
    if max(r, R) > inter_end:
        ans += 1
        
    print(ans)

# Read number of test cases
t = int(input())
for _ in range(t):
    solve()