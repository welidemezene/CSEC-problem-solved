import sys

# High-speed I/O for 300+ solve veterans
input = sys.stdin.read

def solve():
    data = input().split()
    if not data:
        return
    
    t = int(data[0])
    results = []
    
    for i in range(t):
        n = int(data[2*i + 1])
        k = int(data[2*i + 2])
        
        # 1. Parity check: n and k must be both even or both odd
        # 2. Minimum sum check: n must be at least k*k
        if (n % 2 == k % 2) and (n >= k * k):
            results.append("YES")
        else:
            results.append("NO")
            
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()