# False None 0 "" () [] {} are all equal to false.
print(True + False + 42)
print(bool('I think, therefore I am'))
print(bool(42))
print(bool(''))
print(bool(0))
name = input('What\'s your name? ')
if name.endswith('Gumby'):
    if name.startswith("Mr."):
        print("Hello, Mr. Gumby")
    elif name.startswith("Mrs."):
        print("Hello, Mrs. Gumby")
    else:
        print('Hello, Gumby')
else:
    print("Hello, stranger")

num = int(input('Enter a number:'))
if num > 0:
    print("The number is positive")
elif num < 0:
    print("The number is negative")
else:
    print("The number is zero")

name = input("What is your name?")
if 's' in name:
    print("Your name contains the letter 's'.")
else:
    print("Your name does not contains the letter 's'.")
