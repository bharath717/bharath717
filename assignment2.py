#%%writefile my_python_file.py
# This is your Python file. You can add your code here.

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Error!!!"
    return x / y

print("Select operation:")
print("+")
print("-")
print("*")
print("/")

choice = input("Enter operator:")

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

if choice == '+':
    print("Result:", add(num1, num2))
elif choice == '-':
    print("Result:", subtract(num1, num2))
elif choice == '*':
    print("Result:", multiply(num1, num2))
elif choice == '/':
    print("Result:", divide(num1, num2))
else:
    print("Invalid input")