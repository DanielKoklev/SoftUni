hour = int(input())
weekday = input()

if weekday == 'Sunday' or hour < 10 or hour > 18:
    print('closed')
elif weekday == ("Monday", "Tueday", "Wednesday",
                 "Thursday", "Friday", "Saturday") and hour >= 10 or hour <= 18:
    print('open')