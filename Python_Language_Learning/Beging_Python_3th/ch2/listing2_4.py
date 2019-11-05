# Check a user name and PIN code

database = [
    ['albert', '1234'],
    ['smith',  '4242'],
    ['jones',  '9843'],
]

username = input("User name: ")
pin = input("Pin code: ")

if [username, pin] in database:print("Access granted")
