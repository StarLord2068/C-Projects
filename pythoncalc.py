import sys

print("Welcome to calculator. Please enter the first number:")
num1 = input()
print("The typed number is " + str(num1) + ". Please type the operator (*, /, +, -).")
valueOperator = input()
print("The typed operator is " + valueOperator + ". Please type the second number:")
num2 = input()
print("The typed number is " + str(num2) + ". Now calculating...")

if valueOperator == '*':
    sum = int(num1) * int(num2)
    print("The sum is " + str(sum) + ". Thank you for using calculator.")
    sys.exit("Program ended.")
if valueOperator == '/':
    sum = int(num1) / int(num2)
    print("The sum is " + str(sum) + ". Thank you for using calculator.")
    sys.exit("Program ended.")
if valueOperator == '+':
    sum = int(num1) + int(num2)
    print("The sum is " + str(sum) + ". Thank you for using calculator.")
    sys.exit("Program ended.")
if valueOperator == '-':
    sum = int(num1) - int(num2)
    print("The sum is " + str(sum) + ". Thank you for using calculator.")
    sys.exit("Program ended.")
else:
    print("Inputted operator is not accepted. Please reopen the program and try again.")
    sys.exit("Program ended with one error. (See above)")
