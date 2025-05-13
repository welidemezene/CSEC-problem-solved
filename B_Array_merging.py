import sys
input = sys.stdin.read

def find_max_streak(arr):
    streaks = {}
    count = 1

    for i in range(1, len(arr)):
        if arr[i] == arr[i-1]:
            count += 1
        else:
            streaks[arr[i-1]] = max(streaks.get(arr[i-1], 0), count)
            count = 1

    streaks[arr[-1]] = max(streaks.get(arr[-1], 0), count)

    return streaks

def solve():
    input_data = input().strip().splitlines()
    t = int(input_data[0])
    index = 1

    results = []

    for _ in range(t):
        n = int(input_data[index])
        a = list(map(int, input_data[index + 1].split()))
        b = list(map(int, input_data[index + 2].split()))

        streak_a = find_max_streak(a)
        streak_b = find_max_streak(b)

        max_length = 0

        # Combine the maximum streak from both arrays for each unique number
        all_numbers = set(a) | set(b)
        for x in all_numbers:
            max_length = max(max_length, streak_a.get(x, 0) + streak_b.get(x, 0))

        results.append(str(max_length))

        index += 3

    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()
