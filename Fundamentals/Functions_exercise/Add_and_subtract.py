def sum_numbers(num1: int, num2: int):
    total = num1 + num2

    return total


def subtract(sum1: int, num3: int):
    total = sum1 - num3

    return total


def add_and_subtract(num1: int, num2: int, num3: int):
    sum1 = sum_numbers(num1, num2)
    result = subtract(sum1, num3)

    return result

num1 = int(input())
num2 = int(input())
num3 = int(input())

print(add_and_subtract(num1, num2, num3))