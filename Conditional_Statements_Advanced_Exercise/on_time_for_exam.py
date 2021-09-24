hour_for_exam = int(input())
minute_for_exam = int(input())
hour_arrival = int(input())
minute_arrival = int(input())

exam_time_in_minutes = (hour_for_exam * 60) + minute_for_exam
arrive_time_in_minutes = (hour_arrival * 60) + minute_arrival

diff = abs(exam_time_in_minutes - arrive_time_in_minutes)
hour = diff // 60
minute = diff % 60

if exam_time_in_minutes == arrive_time_in_minutes:
    print("On time")

elif exam_time_in_minutes > arrive_time_in_minutes:
    if diff <= 30:
        print("On time")
        print(f'{minute} minutes before the start')

    elif 30 < diff < 60:
        print(f"Early")
        print(f'{minute} minutes before the start')

    elif diff < 59:
        print(f"Early")
        print(f'{hour}:{minute:02d} hours before the start')

elif arrive_time_in_minutes < exam_time_in_minutes:
    print("Late")

    if diff < 60:
        print(f"{minute} minutes after the start")
    else:
        print(f"{hour}:{minute:02d} hours after the start")
