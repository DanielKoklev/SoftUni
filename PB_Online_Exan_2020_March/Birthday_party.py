rent_for_hall = float(input())

cake = rent_for_hall * 0.2
drinks = cake * 0.55
animator = rent_for_hall * (1/3)

budget = rent_for_hall + cake + drinks + animator

print(f'{budget:.1f}')