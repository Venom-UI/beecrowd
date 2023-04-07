note = int(input())

if note >= 86:
    concept = 'A'
elif note >= 61:
    concept = 'B'
elif note >= 36:
    concept = 'C'
elif note >= 1:
    concept = 'D'
else:
    concept = 'E'

print(concept)