annual_tax = int(input())

price_shoes = annual_tax - (annual_tax * 0.40)
price_tracksuit = price_shoes - (price_shoes * 0.20)
price_ball = price_tracksuit * 0.25
price_acessories = price_ball * 0.20

sum_all_prices = annual_tax + price_acessories + price_ball + price_shoes + price_tracksuit

print(sum_all_prices)
