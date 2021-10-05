number_of_groups = int(input())

musala = 0
montblanc = 0
kilimandjaro = 0
k2 = 0
everest = 0
sum_climbers = 0

for n in range(1, number_of_groups + 1):
    number_of_climbers = int(input())
    if number_of_climbers <= 5:
        musala += number_of_climbers
    elif 6 <= number_of_climbers <= 12:
        montblanc += number_of_climbers
    elif 13 <= number_of_climbers <= 25:
        kilimandjaro += number_of_climbers
    elif 26 <= number_of_climbers <= 40:
        k2 += number_of_climbers
    else:
        everest += number_of_climbers

sum_climbers = musala + montblanc + kilimandjaro + k2 + everest

percentage_musala = musala / sum_climbers * 100
percentage_montblanc = montblanc / sum_climbers * 100
percentage_kilimandjaro = kilimandjaro / sum_climbers * 100
percentage_k2 = k2 / sum_climbers * 100
percentage_everest = everest / sum_climbers * 100

print(f'{percentage_musala:.2f}%')
print(f'{percentage_montblanc:.2f}%')
print(f'{percentage_kilimandjaro:.2f}%')
print(f'{percentage_k2:.2f}%')
print(f'{percentage_everest:.2f}%')
