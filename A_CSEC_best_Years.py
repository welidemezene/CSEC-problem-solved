n = int(input().strip())
n = n+1
while True:
    m = str(n)
    m = set(m)
    if len(m) == 4:
        print(n)
        break
    else:
        n = n+1    