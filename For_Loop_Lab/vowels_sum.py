x = input()
x_length = len(x)
vowels_sum = 0

for i in range(0, x_length):
    current_letter = x[i]

    if current_letter == "a":
        vowels_sum += 1
    elif current_letter == "e":
        vowels_sum += 2
    elif current_letter == "i":
        vowels_sum += 3
    elif current_letter == "o":
        vowels_sum += 4
    elif current_letter == "u":
        vowels_sum += 5

print(vowels_sum)
