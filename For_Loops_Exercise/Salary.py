num_tabs = int(input())
salary = int(input())
fine = 0
for websites in range(num_tabs):
    website = input()

    if website == "Facebook":
        fine = 150
    elif website == "Instagram":
        fine = 100
    elif website == "Reddit":
        fine = 50
    else:
        fine = 0

    salary -= fine

    if salary <= 0:
        print(f'You have lost your salary.')
        break
if salary > 0:
    print(f'{salary}')
