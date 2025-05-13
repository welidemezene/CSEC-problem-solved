n = int(input())

result = []
current = 1

while n >= current:
    result.append(current)
    n -= current
    current += 1

# Add the remaining candies to the last element to make the sum equal to original n
if n > 0:
    result[-1] += n

print(len(result))
print(' '.join(map(str, result)))
