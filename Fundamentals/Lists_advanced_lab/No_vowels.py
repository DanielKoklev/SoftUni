vowels = ['a', 'e', 'o', 'u', 'i']
text = input()
result = [el for el in text if el.lower() not in vowels]
print("".join(result))

for el in text:
    if el.lower() not in vowels:
        result.append(el)

print("".join(result))