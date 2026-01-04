# Codeforces 1234B2 Solution
import sys
from collections import deque

def solve():
    # n messages, k is screen size
    n, k = map(int, sys.stdin.readline().split())
    ids = list(map(int, sys.stdin.readline().split()))
    
    q = deque()
    on_screen = set()
    
    for x in ids:
        if x in on_screen:
            continue
            
        if len(q) >= k:
            removed = q.pop() # Remove from RIGHT (oldest in this logic)
            on_screen.remove(removed)
            
        q.appendleft(x) # Add to LEFT (newest)
        on_screen.add(x)
        
    print(len(q))
    print(*q)

solve()