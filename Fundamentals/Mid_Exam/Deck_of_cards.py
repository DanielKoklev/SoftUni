cards = input().split(", ")
num_operations = int(input())
count = 0
whole_deck = cards

while count < num_operations:
    command = input().split(", ")
    operation = command[0]
    type_of_card = command[1]
    if len(command) > 2:
        type_of_card_after_i = command[2]

    if operation == "Add":
        if type_of_card in whole_deck:
            print("Card is already in the deck")
        else:
            whole_deck.append(type_of_card)
            print("Card successfully added")

    elif operation == "Remove":
        if type_of_card not in whole_deck:
            print("Card not found")
        else:
            whole_deck.remove(type_of_card)
            print("Card successfully removed")

    elif operation == "Remove At":
        if int(type_of_card) > len(whole_deck):
            print("Index out of range")
        else:
            whole_deck.pop(int(type_of_card))
            print("Card successfully removed")

    elif operation == "Insert":
        if int(type_of_card) > len(whole_deck):
            print("Index out of range")
        elif type_of_card_after_i in whole_deck:
            print("Card is already added")
        else:
            whole_deck.insert(int(type_of_card), type_of_card_after_i)
            print("Card successfully added")
    count += 1

print(", ".join(whole_deck))
