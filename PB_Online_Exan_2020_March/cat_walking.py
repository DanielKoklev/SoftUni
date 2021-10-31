minutes_of_walking = int(input())
num_of_walks = int(input())
cat_calories = int(input())

total_walking = minutes_of_walking * num_of_walks
total_calories = total_walking * 5
half_calories = cat_calories / 2

if total_calories >= half_calories:
    print(f"Yes, the walk for your cat is enough. Burned calories per day: {total_calories}.")
else:
    print(f"No, the walk for your cat is not enough. Burned calories per day: {total_calories}.")