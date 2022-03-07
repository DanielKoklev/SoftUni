def phone_book_info(number_of_lines, phonebook):
    for x in range(number_of_lines):
        name = input()
        if name not in phonebook:
            print(f"Contact {name} does not exist.")
        else:
            print(f'{name} -> {phonebook[name]}')

    return True


def phonebook_info():
    phonebook = {}
    condition = False

    while True:
        contact_info = input().split('-')

        if contact_info[0].isdigit():
            condition = phone_book_info(int(contact_info[0]), phonebook)
        else:
            phonebook[contact_info[0]] = contact_info[1]

        if condition:
            break


phonebook_info()
