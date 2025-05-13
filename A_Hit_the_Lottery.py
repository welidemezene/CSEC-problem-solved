n = int(input())
count1 = 0
for coin in [100, 20, 10, 5, 1]:
    count1 += n // coin  # take as many of this coin as possible
    n %= coin            # reduce n by the total taken
print(count1)
