from sys import argv, exit
import csv
import cs50
from cs50 import SQL

if len(argv) != 2:
    print("Usage: import.py file.csv")
    exit(0)

db = SQL("sqlite:///students.db")

with open(argv[1], "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        names = []
        for part in row["name"].split(" "):
            names.append(part)

        names.append(row["house"])
        names.append(row["birth"])
        if len(names) == 4:
            db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
                       names[0], None, names[1], names[2], names[3])
        else:
            db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
                       names[0], names[1], names[2], names[3], names[4])
