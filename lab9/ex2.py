# Create the tuple
my_tuple = ("red", "green", "red")

# Access the first element of the tuple
first_element = my_tuple[0]
print("First element:", first_element)

# Get the length of the tuple
tuple_length = len(my_tuple)
print("Tuple length:", tuple_length)

# Count the number of occurrences of "red" in the tuple
red_count = my_tuple.count("red")
print("Number of 'red' occurrences:", red_count)

# Find the index of the first occurrence of "red" in the tuple
red_index = my_tuple.index("red")
print("Index of 'red':", red_index)

# Attempt to extend the tuple with "blue" using the append function
# Note: Tuples are immutable, so you cannot append items to them
