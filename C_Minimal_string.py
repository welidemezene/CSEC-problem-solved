# Codeforces 797C Solution
import sys
from collections import Counter

s = sys.stdin.readline().strip()
stack = []
res = []

# Precompute counts so we know "what is the smallest char left in s?"
count = Counter(s)
min_char_ptr = 0 # 'a' is 0, 'b' is 1...

# Helper to find current smallest available char
def get_min_available():
    global min_char_ptr
    while min_char_ptr < 26 and count[chr(ord('a') + min_char_ptr)] == 0:
        min_char_ptr += 1
    return chr(ord('a') + min_char_ptr)

for char in s:
    stack.append(char)
    count[char] -= 1
    
    # While the stack top is smaller or equal to anything left in the string
    while stack and stack[-1] <= get_min_available():
        res.append(stack.pop())

print("".join(res))