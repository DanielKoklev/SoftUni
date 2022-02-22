num_of_cities = int(input())
count = 0
profit = 0
total_profit = 0
# raining = False
for num in range(1, num_of_cities + 1):
    name_of_city = input("")
    owner_income = float(input())
    owner_expenses = float(input())

    count += 1

    #if count % 3 == 0 and raining is False:
        #owner_expenses += owner_expenses * 0.50

    #if count % 5 == 0:
        #owner_income *= 0.90
        #raining = True

    if count % 5 == 0:
        owner_income = owner_income * 0.90
        if count % 3 == 0:
            pass
    elif count % 3 == 0:
        owner_expenses += owner_expenses * 0.50

    profit = owner_income - owner_expenses
    total_profit += profit

    print(f"In {name_of_city} Burger Bus earned {profit:.2f} leva.")

print(f"Burger Bus total profit: {total_profit:.2f} leva.")
