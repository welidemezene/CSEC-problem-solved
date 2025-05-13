n = int(input())  # number of vectors

# Initialize sums of x, y, and z components
sum_x = 0
sum_y = 0
sum_z = 0

# Read each vector and add its components to the sums
for _ in range(n):
    x, y, z = map(int, input().split())
    sum_x += x
    sum_y += y
    sum_z += z

# Check if the resultant force vector is (0, 0, 0)
if sum_x == 0 and sum_y == 0 and sum_z == 0:
    print("YES")
else:
    print("NO")
