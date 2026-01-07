import sys

# Fast I/O for the midnight grind
def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    pointer = 1
    
    results = []
    for _ in range(t):
        n = int(input_data[pointer])
        pointer += 1
        
        # Read the grid as a list of strings
        grid = input_data[pointer : pointer + n]
        pointer += n
        
        possible = True
        
        # We only need to check cells that are NOT on the bottom or right edge
        # because the edges are the "walls" that stop everything.
        for r in range(n - 1):
            for c in range(n - 1):
                if grid[r][c] == '1':
                    # Shark Logic: If it's a 1, it MUST have a 1 to its right 
                    # OR a 1 below it to have stopped there.
                    if grid[r][c+1] == '0' and grid[r+1][c] == '0':
                        possible = False
                        break
            if not possible:
                break
        
        if possible:
            results.append("YES")
        else:
            results.append("NO")
            
    # Print all results at once for speed
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()