child1, lenght1, child2, lenght2 = input().split()

side1 = int(child1) * int(lenght1)
side2 = int(child2) * int(lenght2)

if side1 == side2:
    print(0)
elif side1 > side2:
    print(-1)
else:
    print(1)