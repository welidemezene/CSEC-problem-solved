import sys

def solve():
    # Read n (number of employees)
    n = int(sys.stdin.readline())
    
    # managers[i] is the manager of employee i+1
    # We use a 1-based index or just store the list directly
    managers = []
    for _ in range(n):
        managers.append(int(sys.stdin.readline()))
    
    max_depth = 0
    
    # For every employee, let's find how deep their "chain" is
    for i in range(n):
        depth = 1
        curr = managers[i]
        
        # Keep moving up the manager chain until we hit -1 (the boss)
        while curr != -1:
            curr = managers[curr - 1] # Move to the next manager
            depth += 1
        
        # Keep track of the longest chain we've seen
        if depth > max_depth:
            max_depth = depth
            
    print(max_depth)

if __name__ == "__main__":
    solve()