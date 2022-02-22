from math import floor, ceil


data = input().split(">>")

valid_cars = ["family", "heavyDuty", "sports"]

total_tax = 0

for car in data:
    current_car_info = car.split(" ")
    car_type = current_car_info[0]
    used_years = int(current_car_info[1])
    kilometers = int(current_car_info[2])

    if car_type == "family":
        tax = floor(kilometers / 3000) * 12 + (50 - used_years * 5)
    elif car_type == "heavyDuty":
        tax = floor(kilometers / 9000) * 14 + (80 - used_years * 8)
    elif car_type == "sports":
        tax = floor(kilometers / 2000) * 18 + (100 - used_years * 9)
    else:
        print("Invalid car type.")
        continue
    total_tax += tax

    print(f"A {car_type} car will pay {tax:.2f} euros in taxes.")

print(f"The National Revenue Agency will collect {total_tax:.2f} euros in taxes.")