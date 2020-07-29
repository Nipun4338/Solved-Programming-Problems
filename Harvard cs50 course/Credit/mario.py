import cs50
while True:
    a = get_int("Height: ")
    if a >= 1 and a <= 8:
        break

for i in range(a):
    for j in range(a-i-1):
        print(" ", end="")
    for j in range(i+1):
        print("#", end="")
    print("  ", end="")
    for j in range(i+1):
        print("#", end="")
    print()