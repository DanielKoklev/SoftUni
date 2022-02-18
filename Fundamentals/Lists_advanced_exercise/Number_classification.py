numbers = list(map(int, input().split(', ')))
positive_nums = [str(el) for el in numbers if el >= 0]
negative_nums = [str(el) for el in numbers if el < 0]
even_nums = [str(el) for el in numbers if el % 2 == 0]
odd_nums = [str(el) for el in numbers if el % 2 != 0]

print(f"Positive: {', '.join(positive_nums)}")
print(f"Negative: {', '.join(negative_nums)}")
print(f"Even: {', '.join(even_nums)}")
print(f"Odd: {', '.join(odd_nums)}")
