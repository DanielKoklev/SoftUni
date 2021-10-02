actor = input()
points_from_academy = float(input())
jury = int(input())

for i in range(0, jury):
    name_of_jury = input()
    points_from_jury = float(input())
    length_name = len(name_of_jury)

    current_points = (length_name * points_from_jury) / 2

    points_from_academy += current_points

    if points_from_academy >= 1250.5:
        break

if points_from_academy >= 1250.5:
    print(f'Congratulations, {actor} got a nominee for leading role with {points_from_academy:.1f}!')
else:
    diff = 1250.5 - points_from_academy
    print(f'Sorry, {actor} you need {diff:.1f} more!')
