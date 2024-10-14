def max_mex(t, test_cases):
    results = []
    for case in test_cases:
        n, x, a = case
        
        # Sort the array to easily process the numbers in order
        a.sort()
        
        mex = 0  # Start with MEX as 0
        operations_used = 0  # Count how many times we've used the "increase by x" operation
        
        # Using a set for quick lookups on existing numbers
        a_set = set(a)
        
        # Try to build the MEX by filling in gaps
        while True:
            if mex in a_set:  # If mex is in the array, increment it
                mex += 1
            elif operations_used < len(a):  # If we can shift an element to become 'mex'
                # Use an element by effectively treating it as 'mex' through adding x
                operations_used += 1
                mex += 1
            else:  # If no more elements are available to shift or fill gaps
                break
        
        # Store the result for this test case
        results.append(mex)
    
    return results

# Input handling
t = int(input())  # Number of test cases
test_cases = []
for _ in range(t):
    n, x = map(int, input().split())  # n is the length of array, x is the step size for increasing
    a = list(map(int, input().split()))  # The array a
    test_cases.append((n, x, a))

# Get results for all test cases
results = max_mex(t, test_cases)

# Output all results
for res in results:
    print(res)
