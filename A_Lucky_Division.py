n = int(input())

luck_number = [4,7,47,74,74,77,477,474,444,447,777,747,774,744]

is_it_lucky = False
for m in luck_number:
    if n % m == 0:
        is_it_lucky = True
        break
if is_it_lucky:
    print("YES")
else:
    print("NO")        