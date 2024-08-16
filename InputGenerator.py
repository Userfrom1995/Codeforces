import random

def generate_input(filename, num_lines):
    with open(filename, 'w') as file:
        file.write(f"{num_lines}\n")
        for _ in range(num_lines):
            first = random.choice([1, 2, 3])
            second = random.randint(1, 100) if first in [1, 2] else ""
            file.write(f"{first} {second}\n")

generate_input('input.txt', 2000)

