t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    s = len(a)
    sum1 = 0
    count1 = 0
    check = True
    for i in range(len(a)):
        sum1 += abs(a[i])

        if a[i] < 0 and check:
            count1+=1
            check = False
        elif a[i] > 0:
            check = True 
    print(sum1, count1)          



