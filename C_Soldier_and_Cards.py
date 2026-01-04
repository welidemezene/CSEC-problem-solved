# Codeforces 546C Solution
import sys
from collections import deque

def solve():
    # Read input carefully
    n = int(sys.stdin.readline())
    line1 = list(map(int, sys.stdin.readline().split()))
    line2 = list(map(int, sys.stdin.readline().split()))
    
    # First number in line is just the count k, ignore it for the deck
    d1 = deque(line1[1:])
    d2 = deque(line2[1:])
    
    moves = 0
    # Limit moves to prevent infinite loops (math proof shows loop happens relatively quickly)
    while moves < 200000:
        if not d1:
            print(moves, 2)
            return
        if not d2:
            print(moves, 1)
            return
            
        c1 = d1.popleft()
        c2 = d2.popleft()
        
        if c1 > c2:
            d1.append(c2)
            d1.append(c1)
        else:
            d2.append(c1)
            d2.append(c2)
        moves += 1
        
    print(-1)

solve()