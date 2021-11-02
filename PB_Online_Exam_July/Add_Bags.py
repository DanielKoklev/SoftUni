bag_after_20kg = float(input())
kg_bag = float(input())
days = int(input())
number_of_bags = int(input())

result_bag = 0

if kg_bag < 10:
    result_bag = bag_after_20kg * 0.2
elif 10 <= kg_bag <= 20:
    result_bag = bag_after_20kg * 0.5
else:
    result_bag = bag_after_20kg

if days > 30:
    result_bag += result_bag * 0.1
elif 7 <= days <= 30:
    result_bag += result_bag * 0.15
else:
    result_bag += result_bag * 0.4

final_result = result_bag * number_of_bags

print(f'The total price of bags is: {final_result:.2f} lv.')
