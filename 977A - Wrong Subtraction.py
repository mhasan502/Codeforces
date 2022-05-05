number, time = list(map(int, input().split()))

for i in range(time):
    if number % 10 == 0:
        number = int(number / 10)
    else:
        number = number - 1

print(int(number))
