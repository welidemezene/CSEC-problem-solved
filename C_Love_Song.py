n,q = map(int, input().split())
s = input()
prefix = [0] * (n+1)
for i in range(n):
    w = ord(s[i]) - ord('a') + 1
    prefix[i+1] = prefix[i] + w

for i in range(q):
    l,r = map(int, input().split())   
    resul = prefix[r] - prefix[l-1] 
    print(resul)

