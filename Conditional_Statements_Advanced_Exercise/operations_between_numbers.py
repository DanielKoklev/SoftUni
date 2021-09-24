num1 = int(input())
num2 = int(input())
operator = input()

x = ""

if operator == "+":
    result = num1 + num2
    if result % 2 == 0:
        x = "even"
    else:
        x = "odd"
    print(f"{num1} {operator} {num2} = {result} - {x}")
elif operator == "-":
    result = num1 - num2
    if result % 2 == 0:
        x = "even"
    else:
        x = "odd"
    print(f"{num1} {operator} {num2} = {result} - {x}")
elif operator == "*":
    result = num1 * num2
    if result % 2 == 0:
        x = "even"
    else:
        x = "odd"
    print(f"{num1} {operator} {num2} = {result} - {x}")

if operator == "/":
    if num1 and num2 != 0:
        result = num1 / num2
        print(f"{num1} / {num2} = {result:.2f}")
    else:
        print(f"Cannot divide {num1} by zero")

if operator == "%":
    if num1 and num2 != 0:
        result = num1 % num2
        print(f"{num1} % {num2} = {result}")
    else:
        print(f"Cannot divide {num1} by zero")
