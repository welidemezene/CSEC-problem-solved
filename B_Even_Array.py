import sys

def solve():
    # Fast I/O is the Shark's secret weapon
    input_data = sys.stdin.read().split()
    if not input_data: return
    
    t = int(input_data[0])
    pointer = 1
    
    for _ in range(t):
        n = int(input_data[pointer])
        a = list(map(int, input_data[pointer+1 : pointer+1+n]))
        pointer += n + 1
        
        wrong_even = 0 # Even index has odd number
        wrong_odd = 0  # Odd index has even number
        
        for i in range(n):
            if i % 2 == 0 and a[i] % 2 != 0:
                wrong_even += 1
            elif i % 2 != 0 and a[i] % 2 == 0:
                wrong_odd += 1
        
        # Shark Logic: You can only swap a "wrong even" with a "wrong odd"
        # If the counts aren't equal, it's impossible.
        if wrong_even == wrong_odd:
            print(wrong_even)
        else:
            print("-1")

solve()