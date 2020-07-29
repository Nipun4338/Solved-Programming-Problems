from cs50 import get_string

x = get_string("Text: ")
word = 0
sentence = 0
letter = 0

for i in x:
    if i == ' ':
        word += 1
    if i.lower() >= 'a' and i.lower() <= 'z':
        letter += 1
    if i in ['.', '?', '!']:
        sentence += 1
word += 1


letter = (letter / word) * 100
sentence = (sentence / word) * 100
e = round((0.0588 * letter) - (0.296 * sentence) - 15.8)


if e >= 16:
    print("Grade 16+\n")
elif e < 1:
    print("Before Grade 1\n")
else:
    print(f"Grade {int(e)}")
