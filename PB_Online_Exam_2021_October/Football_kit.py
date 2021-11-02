price_of_tshirt = float(input())
needed_money = float(input())

price_shorts = price_of_tshirt * 0.75
price_socks = price_shorts * 0.20
price_shoes = (price_of_tshirt + price_shorts) * 2

total_sum = price_shoes + price_socks + price_shorts + price_of_tshirt

after_discount = total_sum * 0.85

if after_discount >= needed_money:
    print(f'Yes, he will earn the world-cup replica ball!')
    print(f'His sum is {after_discount:.2f} lv.')
else:
    print(f'No, he will not earn the world-cup replica ball.')
    print(f'He needs {needed_money - after_discount:.2f} lv. more.')