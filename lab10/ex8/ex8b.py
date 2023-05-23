import matplotlib.pyplot as plt
import numpy as np

# Calculate the range
x_range = np.arange(-500, 501)

# Calculate x values based on the range using array operations
x = x_range * 0.01

# Calculate y1 and y2 values for each x using array operations
y1 = x ** 2 + 1
y2 = x ** 3 + x ** 2 + x + 1

# Plotting
plt.plot(x, y1, label="y1(x) = x^2 + 1")
plt.plot(x, y2, label="y2(x) = x^3 + x^2 + x + 1")
plt.title("Polynomial Functions")
plt.xlabel("x")
plt.ylabel("y")
plt.legend()
plt.show()
