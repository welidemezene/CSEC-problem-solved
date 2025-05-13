n = int(input())
for i in range(n):
    m = input()
    t = len(m)
    if t > 10:
        print(m[0]+ str(t-2)+ m[-1])
    else:
        print(m)    