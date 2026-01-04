t = int(input())
for i in range(t):
    s = input()
    zeros = s.count("0")
    ones = s.count("1")
    min1 = min(zeros,ones)
    if min1%2 == 1:
        print("DA")
    else:
        print("NET")    