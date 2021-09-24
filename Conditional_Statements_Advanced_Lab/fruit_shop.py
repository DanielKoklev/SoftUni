fruit = input()
day = input()
quantity = float(input())

work_days = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday"]
weekend = ["Saturday", "Sunday"]
fruits = ["banana", "apple", "orange", "grapefruit", "kiwi", "pineapple", "grapes"]

if fruit in fruits and day in work_days:
    if fruit == "banana":
        result = quantity * 2.50
        print(f'{result:.2f}')
    elif fruit == "apple":
        result = quantity * 1.20
        print(f'{result:.2f}')
    elif fruit == "orange":
        result = quantity * 0.85
        print(f'{result:.2f}')
    elif fruit == "grapefruit":
        result = quantity * 1.45
        print(f'{result:.2f}')
    elif fruit == "kiwi":
        result = quantity * 2.70
        print(f'{result:.2f}')
    elif fruit == "pineapple":
        result = quantity * 5.50
        print(f'{result:.2f}')
    elif fruit == "grapes":
        result = quantity * 3.85
        print(f'{result:.2f}')
    else:
        print("error")
elif fruit in fruits and day in weekend:
    if fruit == "banana":
        result = quantity * 2.70
        print(f'{result:.2f}')
    elif fruit == "apple":
        result = quantity * 1.25
        print(f'{result:.2f}')
    elif fruit == "orange":
        result = quantity * 0.90
        print(f'{result:.2f}')
    elif fruit == "grapefruit":
        result = quantity * 1.60
        print(f'{result:.2f}')
    elif fruit == "kiwi":
        result = quantity * 3.00
        print(f'{result:.2f}')
    elif fruit == "pineapple":
        result = quantity * 5.60
        print(f'{result:.2f}')
    elif fruit == "grapes":
        result = quantity * 4.20
        print(f'{result:.2f}')
    else:
        print("error")
else:
    print("error")