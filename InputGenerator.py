# Function to calculate the difference for N=2
def calculate_difference(k):
    # We know N is fixed to 2, so the sequence is [k, k+1]
    sum_first_part = k  # First element
    sum_second_part = k + 1  # Second element
    difference = abs(sum_second_part - sum_first_part)  # Difference between second part and first part
    return difference

# Function to generate output for each test case
def generate_output():
    # Open the input and output files
    with open("input.txt", "r") as infile, open("output.txt", "w") as outfile:
        # Read the number of test cases (first line)
        test_cases = int(infile.readline().strip())
        
        # Process each test case
        for _ in range(test_cases):
            # Read the values of N and K (we don't need N since it's always 2)
            n, k = map(int, infile.readline().strip().split())
            
            # Calculate the result
            result = calculate_difference(k)
            
            # Write the result to the output file
            outfile.write(f"{result}\n")

# Call the function to generate the output file
generate_output()
