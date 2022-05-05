stones = input()
array = input()

count = 0

for i in range(1, len(array)):
    if array[i - 1] == array[i]:
        count += 1

print(count)
