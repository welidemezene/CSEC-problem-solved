t = int(input())
for i in range(t):
    n = int(input())
    a = input()
    if "A" in a[:n-1]:
        print(n-1)
    else:
        print("0")    