days_of_holiday = int(input()) - 1
type_of_room = input()
grade = input()

if type_of_room == "room for one person":
    result = days_of_holiday * 18
elif type_of_room == "apartment":
    result = days_of_holiday * 25
    if days_of_holiday < 10:
        result *= 0.70
    elif 10 <= days_of_holiday <= 15:
        result *= 0.65
    elif days_of_holiday > 15:
        result /= 2
elif type_of_room =="president apartment":
    result = days_of_holiday * 35
    if days_of_holiday < 10:
        result *= 0.90
    elif 10 <= days_of_holiday <= 15:
        result *= 0.85
    elif days_of_holiday > 15:
        result *= 0.80

if grade == "positive":
    result += (result * 0.25)
else:
    result *= 0.90

print(f'{result:.2f}')
