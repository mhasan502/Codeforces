stop = int(input())

highest = inside = 0

for i in range(stop):
    exit_, enter_ = list(map(int, input().split()))
    inside = inside - exit_ + enter_

    if highest < inside:
        highest = inside

print(highest)
