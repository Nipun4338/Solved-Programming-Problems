from cs50 import get_float
while True:
    a = get_float("Change owed: ")
    if a >= 0.0:
        break

b = round(a * 100)
sum = 0
sum += int((b / 25)) + int(((b % 25) / 10)) + int((((b % 25) % 10) / 5)) + int((((b % 25) % 10) % 5))
print(sum)