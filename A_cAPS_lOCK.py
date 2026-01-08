s = input()
# Rule: All characters from index 1 to the end MUST be uppercase
is_accidental = all(char.isupper() for char in s[1:])

if is_accidental:
    print(s.swapcase())
else:
    print(s)