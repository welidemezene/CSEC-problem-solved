import sys

def solve():
    # Read n (lanterns) and l (street length)
    # Read lantern positions
    input_data = sys.stdin.read().split()
    if not input_data: return
    
    n = int(input_data[0])
    l = int(input_data[1])
    
    # Get the positions and SORT them
    a = []
    for i in range(n):
        a.append(int(input_data[2+i]))
    a.sort()
    
    # 1. Check the gap at the very start (0 to first lantern)
    max_dist = a[0] - 0
    
    # 2. Check the gaps between lanterns (needs d = gap / 2)
    for i in range(n - 1):
        gap = a[i+1] - a[i]
        if (gap / 2) > max_dist:
            max_dist = gap / 2
            
    # 3. Check the gap at the very end (last lantern to l)
    end_gap = l - a[-1]
    if end_gap > max_dist:
        max_dist = end_gap
        
    # Print with precision (Codeforces requires it for float problems)
    print(f"{max_dist:.10f}")

if __name__ == "__main__":
    solve()