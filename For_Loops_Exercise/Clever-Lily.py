age = int(input())
price_washing_machine = float(input())
price_toy = int(input())

cash = 0

for i in range(1, age + 1):
    if i % 2 == 0:
        cash += i * 5 - 1
    else:
        cash += price_toy

result = abs(cash - price_washing_machine)
if cash < price_washing_machine:
    print(f'No! {result:.2f}')
else:
    print(f'Yes! {result:.2f}')

