n = int(input())
reached_num = False
cnt = 0

for a in range(1, 9 + 1):
    for b in range(9, a, - 1):
        for c in range(0, 9 + 1):
            for d in range(9, c, - 1):
                sum_numbers = a + b + c + d
                multiply_numbers = a * b * c * d
                if sum_numbers == multiply_numbers and n % 10 == 5:
                    cnt += 1
                    print(f'{a}{b}{c}{d}')
                    reached_num = True
                    break
                elif multiply_numbers // sum_numbers == 3 and n % 3 == 0:
                    cnt += 1
                    print(f'{d}{c}{b}{a}')
                    reached_num = True
                    break
            if reached_num:
                break
        if reached_num:
            break
    if reached_num:
        break
if cnt == 0:
    print("Nothing found")
