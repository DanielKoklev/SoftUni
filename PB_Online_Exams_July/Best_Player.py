import sys

max_score = -sys.maxsize
name = ""
max_name = ""

current_name = input()
while current_name != "END":
    goals = int(input())
    name = current_name

    if goals > max_score:
        max_score = goals
        max_name = name

    if goals >= 10:
        break

    name = input()

print(f'{max_name} is the best player!')

if goals >= 3:
    print(f'He has scored {goals} goals and made a hat-trick !!!')
else:
    print(f'He has scored {goals} goals.')
