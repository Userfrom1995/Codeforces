# Function to generate test cases
def generate_test_cases():
    test_cases = 1000  # Number of test cases
    N = 2  # Fixed value of N
    
    # Open a file to write the test cases
    with open("input.txt", "w") as f:
        # Write the number of test cases at the top
        f.write(f"{test_cases}\n")
        
        # Generate test cases
        for i in range(2, test_cases + 2):  # K starts from 2 to 1001
            f.write(f"{N} {i}\n")

# Call the function to generate test cases
generate_test_cases()
