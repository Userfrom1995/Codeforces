# Repeating the pattern 2000 times and saving it to a text file

# Define the pattern
pattern = """50
1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0
9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 5 6 8 5 7 4 2 6 2 7 
50
1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 0 0 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 0 0 1 1 2 2 3 3 4 4 5 5
"""

# Repeat the pattern 2000 times
repeated_pattern = pattern * 2000000

# Save to a text file
file_path = r"C:\Users\Tejas Tyagi\VS-CODE\CodeForces\input.txt"
with open(file_path, "w") as file:
    file.write(repeated_pattern)

file_path
