limak, bob = list(map(int, input().split()))

year = 0

while limak <= bob:
    limak *= 3
    bob *= 2
    year += 1

print(year)
