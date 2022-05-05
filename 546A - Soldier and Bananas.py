cost, dollar, banana = list(map(int, input().split()))
total = 0

for i in range(1, banana + 1):
    total = total + (cost * i)

print(0 if dollar > total else total - dollar)
