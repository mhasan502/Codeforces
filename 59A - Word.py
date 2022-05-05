s = input()
uppercase = lowercase = 0

for i in range(len(s)):
    if s[i].isupper():
        uppercase += 1
    elif s[i].islower():
        lowercase += 1

print(s.lower() if lowercase >= uppercase else s.upper())
