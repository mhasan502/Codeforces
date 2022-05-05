location = int(input())

steps, reminder = divmod(location, 5)

print(steps if reminder == 0 else steps + 1)
