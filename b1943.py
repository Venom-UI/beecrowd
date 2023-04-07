position = int(input())
ranks = [1, 2, 3, 5, 10, 25, 50, 100]

for x in ranks:
    if position <= x:
        print("Top", x)
        break