start = int(input())

for x in range(1, start):
    if (start%x) == 0:
        print(x)
print(start)