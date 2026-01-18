import sys

# Fast I/O for the 0.0000001%
def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    pointer = 1
    
    results = []
    for _ in range(t):
        n = int(input_data[pointer])
        a = list(map(int, input_data[pointer+1 : pointer+1+n]))
        pointer += n + 1
        
        # 1. Sort the array to find the extremes
        a.sort()
        
        ans = []
        l, r = 0, n - 1
        
        # 2. Use two pointers to pick elements from the ends 
        # and work towards the middle.
        while l <= r:
            if l == r:
                ans.append(a[l])
            else:
                # We pick the largest and smallest, then second largest...
                ans.append(a[r])
                ans.append(a[l])
            l += 1
            r -= 1
            
        # 3. The 'ans' list now has the BIGGEST differences first.
        # The problem asks for NON-DECREASING differences (Smallest first).
        # So, we simply reverse the list.
        ans.reverse()
        
        results.append(" ".join(map(str, ans)))
        
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()