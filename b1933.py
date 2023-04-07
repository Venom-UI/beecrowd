card1, card2 = input().split()
card1 = int(card1)
card2 = int(card2)

if card1 == card2 or card1 > card2:
    print(card1)
else:
    print(card2)