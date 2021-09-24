city = input()
volume_sales = float(input())

if city == "Sofia":
    if 0 <= volume_sales <= 500:
        result = volume_sales * 0.05
        print(f'{result:.2f}')

    elif 500 <= volume_sales <= 1000:
        result = volume_sales * 0.07
        print(f'{result:.2f}')

    elif 1000 <= volume_sales <= 10000:
        result = volume_sales * 0.08
        print(f'{result:.2f}')

    elif volume_sales > 10000:
        result = volume_sales * 0.12
        print(f'{result:.2f}')
    else:
        print("error")

elif city == "Varna":
    if 0 <= volume_sales <= 500:
        result = volume_sales * 0.045
        print(f'{result:.2f}')

    elif 500 <= volume_sales <= 1000:
        result = volume_sales * 0.075
        print(f'{result:.2f}')

    elif 1000 <= volume_sales <= 10000:
        result = volume_sales * 0.10
        print(f'{result:.2f}')

    elif volume_sales > 10000:
        result = volume_sales * 0.13
        print(f'{result:.2f}')
    else:
        print("error")

elif city == "Plovdiv":
    if 0 <= volume_sales <= 500:
        result = volume_sales * 0.055
        print(f'{result:.2f}')

    elif 500 <= volume_sales <= 1000:
        result = volume_sales * 0.08
        print(f'{result:.2f}')

    elif 1000 <= volume_sales <= 10000:
        result = volume_sales * 0.12
        print(f'{result:.2f}')

    elif volume_sales > 10000:
        result = volume_sales * 0.145
        print(f'{result:.2f}')
    else:
        print("error")
else:
    print("error")
