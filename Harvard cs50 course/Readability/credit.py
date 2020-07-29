from cs50 import get_string
a = get_string("Number: ")

if (len(a) < 13 or len(a) == 14 or len(a) > 16):
    print("INVALID\n")
else:
    str1 = ""
    for i in a:
        str1 = i + str1
    sum = 0
    for i in range(1, len(str1), 2):
        temp = int(str1[i])
        temp = temp * 2
        temp1 = str(temp)
        for j in temp1:
            temp2 = int(j)
            sum += temp2
    for i in range(0, len(str1), 2):
        temp = int(str1[i])
        sum += temp

    s = str(sum)
    if(s[len(s)-1] == '0'):
        if (len(a) == 15 and a[0] == '3' and (a[1] == '4' or a[1] == '7')):
            print("AMEX\n")
        elif ((len(a) == 13 or len(a) == 16) and (a[0] == '4')):
            print("VISA\n")
        elif (len(a) == 16 and a[0] == '5' and a[1] in ['1', '2', '3', '4', '5']):
            print("MASTERCARD\n")
        else:
            print("INVALID\n")
    else:
        print("INVALID\n")

