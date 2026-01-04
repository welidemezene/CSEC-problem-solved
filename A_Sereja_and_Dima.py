
import sys


n = int(sys.stdin.readline())
cards = list(map(int, sys.stdin.readline().split()))

left = 0
right = n - 1
sereja = 0
dima = 0
turn = 0 
while left <= right:
  
    if cards[left] > cards[right]:
        val = cards[left]
        left += 1
    else:
        val = cards[right]
        right -= 1
        
    if turn == 0:
        sereja += val
        turn = 1
    else:
        dima += val
        turn = 0

print(sereja, dima)