import sys

# 1. Read N (number of techniques)
# using sys.stdin.readline is a good habit for large inputs (N=2*10^5) in Python
input = sys.stdin.readline

n = int(input())

# 2. Initialize variables
# We need lists to store the sequence of points for comparison later
first_moves = []
second_moves = []

# We need sums to check the first condition
sum_first = 0
sum_second = 0

# We need to track who made the very last move
last_move_winner = "" 

# 3. Process the inputs
for _ in range(n):
    score = int(input())
    
    if score > 0:
        # First wrestler
        first_moves.append(score)
        sum_first += score
        last_move_winner = "first"
    else:
        # Second wrestler (score is negative)
        # Convert to positive for storage and sum
        points = abs(score)
        second_moves.append(points)
        sum_second += points
        last_move_winner = "second"

# 4. Logic Hierarchy to determine the winner

# Condition 1: Check Total Sums
if sum_first > sum_second:
    print("first")
elif sum_second > sum_first:
    print("second")
else:
    # Condition 2: Check Lexicographical Order (Sequence)
    # Python lists compare lexicographically by default
    if first_moves > second_moves:
        print("first")
    elif second_moves > first_moves:
        print("second")
    else:
        # Condition 3: If sums AND sequences are identical
        # The winner is whoever made the last move
        print(last_move_winner)