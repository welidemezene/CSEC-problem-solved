import sys
import bisect

def count_interesting_pairs(n, x, y, a):
    a.sort()  # Sort the array
    total_sum = sum(a)
    count = 0

    # Iterate over the first element of the pair
    for i in range(n):
        target_min = total_sum - y  # Lower bound of required sum
        target_max = total_sum - x  # Upper bound of required sum

        # Use binary search to find the range of valid values
        left = bisect.bisect_left(a, target_min - a[i], i + 1, n)
        right = bisect.bisect_right(a, target_max - a[i], i + 1, n)

        count += (right - left)  # Count valid pairs for this `a[i]`

    return count

# Read input
input = sys.stdin.read
data = input().split()
index = 0
t = int(data[index])  # Number of test cases
index += 1
results = []

for _ in range(t):
    n, x, y = map(int, data[index:index + 3])
    index += 3
    a = list(map(int, data[index:index + n]))
    index += n
    results.append(str(count_interesting_pairs(n, x, y, a)))

sys.stdout.write("\n".join(results) + "\n")
