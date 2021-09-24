x = input()

fruits = ["banana", "apple", "kiwi", "cherry", "lemon", "grapes"]
vegetables = ["tomato", "cucumber", "pepper", "carrot"]

if x in fruits:
    print("fruit")
elif x in vegetables:
    print("vegetable")
else:
    print("unknown")
