data = input()

power = 0
i = 0
while i < len(data):
    if data[i] == '>':
        power += int(data[i+1])
    else:
        if power > 0:
            data = data[:i] + data[i+1:]
            power -= 1
            i -= 1
    i += 1

print(data)