number_aluminium = int(input())
type_aluminium = input()
delivery = input()
total_price = 0
price = 0

if number_aluminium > 10:
    if type_aluminium == "90X130":
        price = 110
        price *= number_aluminium
        if 30 < number_aluminium <= 60:
            price *= 0.95
        elif number_aluminium > 60:
            price *= 0.92
        total_price += price
    elif type_aluminium == "100X150":
        price = 140
        price *= number_aluminium
        if 40 < number_aluminium <= 80:
            price *= 0.94
        elif number_aluminium > 80:
            price *= 0.90
        total_price += price
    elif type_aluminium == "130X180":
        price = 190
        price *= number_aluminium
        if 20 < number_aluminium <= 50:
            price *= 0.93
        elif number_aluminium > 50:
            price *= 0.88
        total_price += price
    else:
        price = 250
        price *= number_aluminium
        if 25 < number_aluminium <= 50:
            price *= 0.91
        elif number_aluminium > 50:
            price *= 0.86
        total_price += price
    if delivery == "With delivery":
        total_price += 60

    if number_aluminium > 99:
        total_price *= 0.96

    print(f"{total_price:.2f} BGN")

if number_aluminium <= 10:
    print("Invalid order")
