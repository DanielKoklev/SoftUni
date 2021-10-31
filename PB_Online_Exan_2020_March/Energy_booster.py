fruit = input()
size_sets = input()
number_sets = int(input())
result = 0
price = 0
if fruit == "Watermelon":
    if size_sets == "big":
        price = (5 * 28.70) * number_sets
    elif size_sets == "small":
        price = (2 * 56) * number_sets

elif fruit == "Mango":
    if size_sets == "big":
        price = (5 * 19.60) * number_sets
    elif size_sets == "small":
        price = (2 * 36.66) * number_sets

elif fruit == "Pineapple":
    if size_sets == "big":
        price = (5 * 24.80) * number_sets
    elif size_sets == "small":
        price = 2 * 42.10 * number_sets

elif fruit == "Raspberry":
    if size_sets == "big":
        price = (5 * 15.20) * number_sets
    elif size_sets == "small":
        price = (2 * 20) * number_sets

if 400 <= price <= 1000:
    price *= 0.85
elif price > 1000:
    price /= 2

print(f'{price:.2f} lv.')