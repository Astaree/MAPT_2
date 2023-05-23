import numpy as np
from statistics import median

sequence = [1, 2]  # Starting elements

while len(sequence) < 1000:
    n = len(sequence)
    numerator = sequence[n - 1] + sequence[n - 2]
    denominator = sequence[n - 1] - sequence[n - 2]
    element = numerator / denominator
    sequence.append(element)

# Calculate the sum and median of the sequence
sequence_sum = np.sum(sequence)
sequence_median = median(sequence)

print("Sequence:", sequence)
print("Sum:", sequence_sum)
print("Median:", sequence_median)
