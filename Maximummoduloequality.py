from math import gcd
from functools import reduce

def solve_query(arr, l, r):
    l -= 1
    r -= 1
    if l == r:
        return 0
    differences = []
    for i in range(l, r):
        differences.append(abs(arr[i+1] - arr[i]))
    return reduce(gcd, differences)

def main():
    t = int(input())
    for _ in range(t):
        n, q = map(int, input().split())
        arr = list(map(int, input().split()))
        results = []
        for _ in range(q):
            l, r = map(int, input().split())
            results.append(str(solve_query(arr, l, r)))
        print(' '.join(results))

if __name__ == "__main__":
    main()