import matplotlib.pyplot as plt

# Calculate the range
x_range = range(-500, 501)

# Calculate x values based on the range
x = [xi * 0.01 for xi in x_range]

# Calculate y1 and y2 values for each x
y1 = [xi ** 2 + 1 for xi in x]
y2 = [xi ** 3 + xi ** 2 + xi + 1 for xi in x]

# Plotting
plt.plot(x, y1, label="y1(x) = x^2 + 1")
plt.plot(x, y2, label="y2(x) = x^3 + x^2 + x + 1")
plt.title("Polynomial Functions")
plt.xlabel("x")
plt.ylabel("y")
plt.legend()
plt.show()
