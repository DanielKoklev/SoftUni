budget = int(input())
season = input()
number_fishermen = int(input())

price_for_ship = 0
additional_discount = 0

if season == "Summer" or season == "Autumn":
    price_for_ship = 4200
elif season == "Spring":
    price_for_ship = 3000
elif season == "Winter":
    price_for_ship = 2600

if number_fishermen <= 6:
    price_for_ship *= 0.9
elif number_fishermen <= 11:
    price_for_ship *= 0.85
else:
    price_for_ship *= 0.75

if season != "Autumn" and number_fishermen % 2 == 0:
    price_for_ship *= 0.95

if budget >= price_for_ship:
    print(f"Yes! You have {budget - price_for_ship:.2f} leva left.")
else:
    result = price_for_ship - budget
    print(f"Not enough money! You need {result:.2f} leva.")
