word = input("Enter a word: ")
reversed = ""
for w in range(len(word) - 1,-1,-1):
    reversed += word[w]
    
print(reversed)