line_count = 0
with open("ex9/test.txt", 'r') as file:
    for line in file:
        line_count += 1

        word_count = len(line.split())
        print(f"Line {line_count}: Number of words = {word_count}")

        vowel_count = sum(1 for char in line.lower() if char in 'aeiou')
        print(f"Line {line_count}: Number of vowels = {vowel_count}")

        line_with_capitalized_vowels = ''.join(char.upper() if char.lower() in 'aeiou' else char for char in line)
        print(f"Line {line_count}: {line_with_capitalized_vowels}")

print("Number of lines in the file:", line_count)
