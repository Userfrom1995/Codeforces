MOD = 998244353

def solve(t, test_cases):
    results = []
    
    for case in test_cases:
        n, planets = case
        planets.sort()  # Sort planets based on their intervals (can experiment with sorting criteria)
        
        total_score = 0
        
        # Process each subset of planets
        for subset_mask in range(1, (1 << n)):  # Loop over all subsets
            max_l = -1
            min_r = n + 1
            expansions = 0
            
            for i in range(n):
                if subset_mask & (1 << i):  # Planet i is in this subset
                    l, r = planets[i]
                    max_l = max(max_l, l)
                    min_r = min(min_r, r)
            
            if max_l <= min_r:
                expansions = 0  # No expansion needed
            else:
                expansions = min(max_l - min_r, 1)  # Minimum expansion to make intervals overlap
            
            total_score = (total_score + expansions) % MOD
        
        results.append(total_score)
    
    return results

# Input reading
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    planets = []
    for _ in range(n):
        l, r = map(int, input().split())
        planets.append((l, r))
    test_cases.append((n, planets))

# Solve
results = solve(t, test_cases)

# Output results
for result in results:
    print(result)
