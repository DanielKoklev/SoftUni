number_of_jury = int(input())
sum_grades = 0
total_grades = 0
counter = 0

name_of_presentation = input()
while True:
    counter += 1
    for i in range(number_of_jury):
        grade = float(input())
        sum_grades += grade
        average_grade = sum_grades / number_of_jury
    print(f'{name_of_presentation} - {average_grade:.2f}.')
    total_grades += average_grade
    sum_grades = 0
    
    name_of_presentation = input()
    if name_of_presentation == "Finish":
        break
        
total_grades /= counter
print(f"Student's final assessment is {total_grades:.2f}.")
