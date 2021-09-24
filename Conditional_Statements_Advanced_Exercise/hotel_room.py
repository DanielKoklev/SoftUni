month = input()
nights = int(input())

total_price_apart = 0
total_price_studio = 0
price_for_apartment = 0
price_for_studio = 0

if month == "May" or month == "October":
    price_for_studio = 50
    price_for_apartment = 65
    if 7 < nights <= 14:
        price_for_studio *= 0.95
    elif nights > 14:
        price_for_studio *= 0.70
        price_for_apartment *= 0.90

if month == "June" or month == "September":
    price_for_studio = 75.20
    price_for_apartment = 68.70
    if nights > 14:
        price_for_studio *= 0.80
        price_for_apartment *= 0.90

if month == "July" or month == "August":
    price_for_studio = 76
    price_for_apartment = 77
    if nights > 14:
        price_for_apartment *= 0.90

total_price_studio = price_for_studio * nights
total_price_apart = price_for_apartment * nights
print(f"Apartment: {total_price_apart:.2f} lv.")
print(f"Studio: {total_price_studio:.2f} lv.")
