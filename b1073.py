interval = int(input()) + 1

for x in range(1, interval):
    if x % 2 == 0:
        print(f"{x}^2 = {x*x}")