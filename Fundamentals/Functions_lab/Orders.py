input_product = input()
quantity = int(input())


def orders(product, x):
    result = None
    if product == 'coffee':
        result = 1.50 * x
    elif product == 'coke':
        result = 1.40 * x
    elif product == 'water':
        result = 1 * x
    elif product == 'snacks':
        result = 2 * x

    return result


print(f'{orders(input_product, quantity):.2f}')
