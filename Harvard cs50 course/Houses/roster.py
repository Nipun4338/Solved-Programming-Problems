from sys import argv, exit
import csv
from cs50 import SQL

if len(argv) != 2:
    print("Usage: roster.py house_name")
    exit(0)

db = SQL("sqlite:///students.db")

x = argv[1]
x = str(x)

cursor = db.execute("SELECT first, middle, last, birth FROM students WHERE house = ? ORDER BY last, first", x)
for row in cursor:
    print(row["first"], end=" ")
    if(row["middle"] != None):
        print(row["middle"], end=" ")
    print(row["last"], end=",")
    print("born", end=" ")
    print(row["birth"])
