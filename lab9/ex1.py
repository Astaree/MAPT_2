color_list = ["Red", "Green", "Blue"]
print(color_list[0])

mixed_list = ["Apple", 5, True, 3.14]
print(mixed_list)

num_items = len(color_list)
print(num_items)

item = "Green"
print(item in color_list)

zeros_list = [0] * 100
print(zeros_list)

digit_names = ["One", "Two", "Three", "Four", "Five"]
combined_list = color_list + digit_names
print(combined_list)

combined_list[0] = "Earth"
combined_list[-1] = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
print(combined_list)

combined_list.append("Mercury")
print(combined_list)
