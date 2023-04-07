increase, monster = 1, 2

while True:
    increase, monster = input().split()
    if monster != '0':
        newmonster = int(increase) * int(monster)
        print(newmonster)
    else:
        break
