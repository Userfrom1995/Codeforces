def min_customers(t):
    for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort(reverse=True)
        customers = 0
        remaining = 0
        for i in range(0, n, x):
            for j in range(i, min(i + x, n)):
                if a[j] <= x - (j % x) if j % x != 0 else x:
                    customers += 1
                elif a[j] < x:
                    remaining += a[j]
                else:
                    customers += (a[j] + x - 1) // x
                    remaining += (a[j] - (a[j] + x - 1) // x * x - (x - 1) if j % x != 0 else a[j] - x * ((a[j] + x - 1) // x)) % x
        customers += remaining // x + (1 if remaining % x != 0 else 0)
        print(customers)

t = int(input())
min_customers(t)