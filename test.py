
from math import gcd
from functools import reduce

def lcm(a, b):
    return a * b // gcd(a, b)

a, b = map(int, input().split())
key = int(input())

left_part = 1
right_part = key

while True:
    if right_part % a == 0 and left_part * right_part // key % b == 0:
        break
    left_part += 1
    right_part -= 1

print("YES")
print(left_part)
print(right_part)

