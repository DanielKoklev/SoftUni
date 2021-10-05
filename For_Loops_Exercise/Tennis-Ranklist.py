import math

number_tournaments = int(input())
start_points = int(input())

points = start_points
mean_points = 0
won_tournaments = 0

for i in range(1, number_tournaments + 1):
    stage_of_tournament = input()

    if stage_of_tournament == "W":
        points += 2000
        mean_points += 2000
        won_tournaments += 1
    elif stage_of_tournament == "F":
        points += 1200
        mean_points += 1200
    else:
        points += 720
        mean_points += 720


mean_points = math.floor(mean_points / number_tournaments)

percentage_won_tournaments = (won_tournaments / number_tournaments) * 100

print(f'Final points: {points}')
print(f'Average points: {mean_points:}')
print(f'{percentage_won_tournaments:.2f}%')
