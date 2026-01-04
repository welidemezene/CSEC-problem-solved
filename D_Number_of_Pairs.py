t = int(input())
for i in range(t):
    n,l,r = map(int,input().split())
    a = list(map(int,input().split()))
    a.sort()
    def count_less(limit):

        l = 0
        r = len(a)-1
        count0 = 0
        while l < r:
            if a[l] + a[r] <=limit:
                count0 += (r-l)
                l+=1
            else:
                r-=1
        return count0
    ans = count_less(r) - count_less(l-1)
    print(ans)         




