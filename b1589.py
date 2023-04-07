tests = int(input())

for x in range(0, tests):
    r1,r2 = input().split()
    r3 = int((int(r1)*2 + int(r2)*2)/2)
    print(r3)