times = int(input())
drove = 0

for x in range(0, times):
    interval, speed = input().split()
    interval = int(interval)
    drove += interval * int(speed)

print(drove) 