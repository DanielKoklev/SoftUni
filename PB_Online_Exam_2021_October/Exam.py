num_of_students = int(input())

group_1 = 0
group_2 = 0
group_3 = 0
group_4 = 0
average = 0


for i in range(1, num_of_students + 1):
    grade = float(input())
    average += grade
    if grade >= 5:
        group_1 += 1
    elif 4 <= grade <= 4.99:
        group_2 += 1
    elif 3 <= grade <= 3.99:
        group_3 += 1
    else:
        group_4 += 1

average_top_students = group_1 / num_of_students * 100
average_group_2 = group_2 / num_of_students * 100
average_group_3 = group_3 / num_of_students * 100
average_group_4 = group_4 / num_of_students * 100
average /= num_of_students

print(f"Top students: {average_top_students:.2f}%")
print(f"Between 4.00 and 4.99: {average_group_2:.2f}%")
print(f"Between 3.00 and 3.99: {average_group_3:.2f}%")
print(f"Fail: {average_group_4:.2f}%")
print(f"Average: {average:.2f}")
