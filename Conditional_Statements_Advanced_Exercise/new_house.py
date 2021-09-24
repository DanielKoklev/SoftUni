flower = input()
quantity = int(input())
budget = int(input())

total_sum = 0

if flower == "Roses":
    total_sum = quantity * 5
    if quantity > 80:
        total_sum -= total_sum * 0.10

if flower == "Dahlias":
    total_sum = quantity * 3.80
    if quantity > 90:
        total_sum -= total_sum * 0.15

if flower == "Tulips":
    total_sum = quantity * 2.80
    if quantity > 80:
        total_sum -= total_sum * 0.15

if flower == "Narcissus":
    total_sum = quantity * 3
    if quantity < 120:
        total_sum += total_sum * 0.15

if flower == "Gladiolus":
    total_sum = quantity * 2.50
    if quantity < 80:
        total_sum += total_sum * 0.20


if budget >= total_sum:
    total_price = budget - total_sum
    print(f"Hey, you have a great garden with {quantity} {flower} and {total_price:.2f} leva left.")
else:
    total_price = total_sum - budget
    print(f"Not enough money, you need {total_price:.2f} leva more.")
