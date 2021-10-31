from math import floor

record_in_seconds = float(input())
distance_in_meters = float(input())
time_for_meter = float(input())

seconds = distance_in_meters * time_for_meter
slowing = floor((distance_in_meters / 50)) * 30
total_time = slowing + seconds

if total_time >= record_in_seconds:
    print(f"No! He was {total_time - record_in_seconds:.2f} seconds slower.")
else:
    print(f"Yes! The new record is {total_time:.2f} seconds.")
