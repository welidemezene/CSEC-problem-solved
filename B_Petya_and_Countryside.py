# 1. Read Inputs
n = int(input())
# Convert the input line of heights into a list of integers
h = list(map(int, input().split()))

# 2. Variable to store the maximum water coverage found so far
max_watered = 0

# 3. Iterate through every section to simulate rain starting there
for i in range(n):
    current_watered = 1  # We always water the section we start on
    
    # --- Check Left ---
    # Start looking at the neighbor to the left (i - 1)
    left = i - 1
    while left >= 0:
        # If the neighbor is taller than the current spot, water stops.
        # Logic: We can flow from (left+1) to (left) only if h[left] <= h[left+1]
        if h[left] <= h[left + 1]:
            current_watered += 1
            left -= 1
        else:
            break # Hit a wall
            
    # --- Check Right ---
    # Start looking at the neighbor to the right (i + 1)
    right = i + 1
    while right < n:
        # If the neighbor is taller, water stops.
        # Logic: We can flow from (right-1) to (right) only if h[right] <= h[right-1]
        if h[right] <= h[right - 1]:
            current_watered += 1
            right += 1
        else:
            break # Hit a wall
    
    # 4. Update the maximum found
    if current_watered > max_watered:
        max_watered = current_watered

# 5. Print the result
print(max_watered)