# 1. Read the inputs
direction = input()  # 'L' or 'R'
text = input()       # The typed message

# 2. Hardcode the keyboard layout
# We can combine all rows into one string because the problem 
# guarantees the shift never goes off the edge of the keyboard.
keys = "qwertyuiopasdfghjkl;zxcvbnm,./"

# 3. Prepare an empty string for the result
original_message = ""

# 4. Iterate through every character in the typed text
for char in text:
    # Find where this character is on the keyboard
    index = keys.find(char)
    
    # Apply the Inverse Logic
    if direction == 'R':
        # Hands moved Right, so he hit the key to the right.
        # We need the key to the Left to fix it.
        original_message += keys[index - 1]
    else: # direction == 'L'
        # Hands moved Left, so he hit the key to the left.
        # We need the key to the Right to fix it.
        original_message += keys[index + 1]

# 5. Print the result
print(original_message)