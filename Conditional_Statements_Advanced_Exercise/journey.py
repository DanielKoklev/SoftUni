budget = float(input())
season = input()

price = 0
destination = ""
trip = ""

if budget <= 100:
    if season == "summer":
        price = budget * 0.30
    elif season == "winter":
        price = budget * 0.70
elif budget <= 1000:
    if season == "summer":
        price = budget * 0.40
    elif season == "winter":
        price = budget * 0.80
else:
    if season == "summer" or season == "winter":
        price = budget * 0.90

if budget <= 100:
    destination = "Bulgaria"
    print(f"Somewhere in {destination} ")
elif budget <= 1000:
    destination = "Balkans"
    print(f"Somewhere in {destination} ")
else:
    destination = "Europe"
    print(f"Somewhere in {destination} ")

if destination == "Europe":
    trip = "Hotel"
elif season == "summer":
    trip = "Camp"
else:
    trip = "Hotel"
print(f"{trip} - {price:.2f}")
