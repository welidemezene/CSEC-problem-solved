n = int(input())
nums = list(map(int, input().split()))

total = sum(nums)
if total % 3 != 0:
    print(0)
else:
    target = total // 3
    current_sum = 0
    count = 0
    ways = 0
    for num in nums[:-1]:  # Exclude last element to ensure 3 parts
        current_sum += num
        if current_sum == 2 * target:
            ways += count
        if current_sum == target:
            count += 1
    print(ways)