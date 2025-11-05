t = int(input())
for i in range(t):
    n,k = map(int, input().split())
    a = list(map(int, input().split()))
    left = 0
    for right in range(1,k):
        val1 = a[right] - a[left]
        if a[left] > val1:
            print("NO")
            break
        else:
            left+=1
    print("YES")    


