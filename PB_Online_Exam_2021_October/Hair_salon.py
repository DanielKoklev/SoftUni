target_for_today = int(input())
command = input()
price = 0


while command != "closed" and price < target_for_today:
    command = input()
    if command == "mens":
        price += 15
    elif command == "ladies":
        price += 20
    elif command == "kids":
        price += 10
    elif command == "touch up":
        price += 20
    elif command == "full color":
        price += 30

if price >= target_for_today:
    print(f'You have reached your target for the day!')
    print(f'Earned money: {price}lv.')
else:
    print(f'Target not reached! You need {target_for_today - price}lv. more.')
    print(f'Earned money: {price}lv.')