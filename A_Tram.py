# n = int(input())
# max1 = 0
# choose = 0
# for i in range(n):
#     a,b = map(int, input().split())
#     choose -=a
#     choose +=b
#     max1 = max(max1, choose)
# print(max1) 
# 

# nums = list(map(int, input().split()))
# target = int(input())
# left = 1
# while left:
#     if nums[left-1] == target:
#         print(left-1)
#         break
# second largest number
# n = list(map(int,input().split()))
# first , second = float("-inf"), float("-inf")   
# for cha in n:
#     if cha > first:
#         second = first
#         first = cha
#     elif cha !=first and cha > second:
#         second = cha
# print(second)            

# n = input()
# if n == n[::-1]:
#     print("it is palindrom")
# else:
#     print("it is not palindrom")    


# n = int(input())
# sum = 0
# for ch in str(n):
#     sum+=int(ch)


# def factorial(n):
#     if n<=1:
#         return 1
#     return n * factorial(n-1)

# def reverse_string(s):
#     if len(s) <=1:
#         return s
#     return reverse_string(s[1:]) + s[0]

# def fibonacci(n):
#     if n <=1:
#         return n
#     return fibonacci(n-1) * fibonacci(n-2)


# class bankacount:
#     def _init_(self, balance):
#         self.balance
#     def deposit(self, amount):
#         if amount > 0:
#             self.balance +=amount
#     def withdraw(self, amount):
#         if amount <= self.balance:
#             self.balance -= amount
#     def checkbalance(self):
#         return self.balance        


#frequency counter

def char_frequency(s):
    dict1 = {}
    for ch in s:
        if ch in dict1:
            dict1[ch] +=1
        else:
            dict1[ch] = 1
    return dict1        

def is_anagram(s1,s2):
    if len(s1) != len(s2):
        return False
    elif char_frequency(s1)==char_frequency(s2):
        return True
    return False

def unique_nums(li):
    uniqe = set()
    stack = []
    for ch in li:
        if ch not in uniqe:
            uniqe.add(ch)
            stack.append(ch)

    return stack
    
def max_subarray_sum(arr, k):
    sum = 0
    max1 = float("-inf")
    for i in range(k):
        sum+=arr[i]
    max1 = sum
    for i in range(k,len(arr)):
        sum+=arr[i]
        sum-=arr[i-k]
        max1 = max(max1, sum)
    return max1    


def longest_unique_substring(s):
    seen = set()
    max_length = 0
    left = 0
    for right in range(len(s)):
        while s[right] in seen:
            seen.remove(s[left])
            left +=1
        seen.add(s[right])
        max_length = max(max_length, right - left + 1)
    return max_length        