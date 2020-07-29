from sys import argv, exit
import csv


def main():
    if len(argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
    else:
        file1 = open(argv[2], "r")
        Lines = file1.readlines()
        Lines = str(Lines[0])
        list1 = []

        count = 0
        with open(argv[1], newline='') as csvfile:
            spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
            for row in spamreader:
                count += 1
                if count == 1:

                    s = row
                    s = str(s)
                    s += '$'
                    t = ''
                    flag = 0
                    for i in s:
                        if i.lower() >= 'a' and i.lower() <= 'z':
                            t += i
                            flag = 1
                        elif (i == ',' or i == '$') and len(t) > 0:
                            if t != "name":
                                agat = 0
                                agat1 = 0
                                temp = len(t)

                                for k in range(temp):
                                    for j in range(k, len(Lines), temp):
                                        if j + len(t) < len(Lines):
                                            if Lines[j:j+len(t)] == t:
                                                agat += 1
                                            else:
                                                agat = 0
                                            if agat1 < agat:
                                                agat1 = agat
                                agat1 = str(agat1)
                                list1.append(agat1)
                            t = ''
                else:
                    s1 = row
                    s1 = str(s1)
                    s1 += '$'
                    t1 = ''
                    t2 = ''
                    flag1 = 0
                    list2 = []
                    for i in s1:
                        if i.lower() >= 'a' and i.lower() <= 'z':
                            t1 += i
                        elif i >= '0' and i <= '9':
                            t2 += i
                        elif (i == ',' or i == '$') and len(t2) > 0:
                            list2.append(t2)
                            t2 = ''

                    for i in range(len(list1)):
                        if list1[i] != list2[i]:
                            flag1 = 1
                            break

                    if flag1 == 0:
                        print(t1)
                        file1.close()
                        exit(0)
        print("No match")
        file1.close()


main()