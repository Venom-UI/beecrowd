tabs, actions = input().split()
tabs = int(tabs)

for x in range(0, int(actions)):
    if input() == "fechou":
        tabs += 1
    else:
        tabs -= 1
print(tabs)