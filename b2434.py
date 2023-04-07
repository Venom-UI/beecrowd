days, money = input().split()
days = int(days)
money = int(money)
menor = 1000

for x in range(0, days):
    change = int(input())
    money += change
    if money < menor:
        menor = money

print(menor)