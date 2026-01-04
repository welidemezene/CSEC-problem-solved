# 1. Read input
n = int(input())

# 2. Calculate the maximum number of Coders
# Formula: ceil(n*n / 2) -> (n*n + 1) // 2
print((n * n + 1) // 2)

# 3. Build and print the grid
for i in range(n):
    row = "" # Create an empty string for the current row
    for j in range(n):
        # Check if the sum of row_index + col_index is even
        if (i + j) % 2 == 0:
            row += "C"
        else:
            row += "."
    print(row)