n = int(input())
a = list(map(int, input().split()))
s = (n*(n+1))//2
s1 = sum(a)
print(s-s1)