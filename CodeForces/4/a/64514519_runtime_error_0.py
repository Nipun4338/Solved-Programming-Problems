# Below is Pythone code for input/output 

import sys 
# For getting input from input.txt file 
sys.stdin = open('input.txt', 'r') 

# Printing the Output to output.txt file 
sys.stdout = open('output.txt', 'w') 

i=int(input())

if i%2==0:
	print("YES")
else:
	print("NO")
