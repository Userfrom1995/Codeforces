import matplotlib.pyplot as plt
import matplotlib.patches as mpatches

# Create a figure and axis
fig, ax = plt.subplots(figsize=(10, 8))

# Define the flowchart elements
elements = [
    ("User", (0.5, 0.9)),  # User
    ("Create Account", (0.5, 0.75)),  # Account Creation
    ("Login", (0.5, 0.65)),  # Login
    ("Browse Philatelic Items", (0.5, 0.55)),  # Browse Items
    ("Search & Filter", (0.5, 0.45)),  # Search
    ("Select Item", (0.5, 0.35)),  # Select Item
    ("Add to Cart", (0.5, 0.25)),  # Add to Cart
    ("Checkout", (0.5, 0.15)),  # Checkout
    ("Order Confirmation", (0.5, 0.05)),  # Confirmation
    ("View Digital Archive", (0.25, 0.4)),  # Digital Archive
    ("Community Features", (0.75, 0.4)),  # Community Features
    ("Notifications", (0.5, 0.1)),  # Notifications
]

# Define the connections between elements
connections = [
    (0, 1),  # User to Create Account
    (0, 2),  # User to Login
    (1, 2),  # Create Account to Login
    (2, 3),  # Login to Browse Items
    (3, 4),  # Browse Items to Search
    (4, 5),  # Search to Select Item
    (5, 6),  # Select Item to Add to Cart
    (6, 7),  # Add to Cart to Checkout
    (7, 8),  # Checkout to Order Confirmation
    (3, 9),  # Browse Items to View Digital Archive
    (3, 10), # Browse Items to Community Features
    (8, 11), # Order Confirmation to Notifications
]

# Draw the elements
for element, (x, y) in elements:
    ax.add_patch(mpatches.Rectangle((x - 0.1, y - 0.05), 0.2, 0.1, edgecolor='black', facecolor='lightgray'))
    ax.text(x, y, element, ha='center', va='center', fontsize=10)

# Draw the connections
for start, end in connections:
    start_pos = elements[start][1]
    end_pos = elements[end][1]
    ax.annotate("", xy=end_pos, xycoords='data', xytext=start_pos, textcoords='data',
                arrowprops=dict(arrowstyle="->", lw=1.5, color='black'))

# Set the limits and hide the axes
ax.set_xlim(0, 1)
ax.set_ylim(-0.1, 1)
ax.axis('off')

# Title
plt.title("Flowchart of Philatelic Website Functionality", fontsize=14)

# Show the plot
plt.tight_layout()
plt.savefig('/mnt/data/philately_website_flowchart.png')
plt.show()
