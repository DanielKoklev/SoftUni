from math import floor


number_of_balls = int(input())
points_red_balls = 0
points_orange_balls = 0
points_yellow_balls = 0
points_white_balls = 0
other_colors = 0
divides_black_ball = 0
total_points = 0

for n in range(1, number_of_balls + 1):
    color = input()
    if color == "red":
        total_points += 5
        points_red_balls += 1
    elif color == "orange":
        total_points += 10
        points_orange_balls += 1
    elif color == "yellow":
        total_points += 15
        points_yellow_balls += 1
    elif color == "white":
        total_points += 20
        points_white_balls += 1
    elif color == "black":
        total_points /= 2
        divides_black_ball += 1
    else:
        other_colors += 1

print(f'Total points: {floor(total_points)}')
print(f'Points from red balls: {points_red_balls}')
print(f'Points from orange balls: {points_orange_balls}')
print(f'Points from yellow balls: {points_yellow_balls}')
print(f'Points from white balls: {points_white_balls}')
print(f'Other colors picked: {other_colors}')
print(f'Divides from black balls: {divides_black_ball}')
