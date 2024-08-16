# Repeating the pattern 2000 times and saving it to a text file

# Define the pattern
pattern = "5056656546565689987546546546546484654675464545465"


# Repeat the pattern 2000 times
for i in range(2):
 pattern = pattern + pattern
 
 
 

# Save to a text file
file_path = r"C:\Users\Tejas Tyagi\VS-CODE\CodeForces\input.txt"
with open(file_path, "w") as file:
    file.write(pattern)

file_path
