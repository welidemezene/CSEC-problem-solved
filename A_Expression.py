a = int(input())
b = int(input())
c = int(input())

val1 = a + b + c
val2 = a * b * c
val3 = a + b * c
val4 = a * b + c
val5 = (a+b) * c
val6 = a * (b+c)

max1 = max(val1,val2,val3,val4,val5,val6)
print(max1)