try:
    file = open("nonexistent_file.txt", "r")
    # Perform operations on the file
    file.close()
except FileNotFoundError:
    print("File not found. Please check the file name and path.")
    
try:
    result = 10 / 0
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
