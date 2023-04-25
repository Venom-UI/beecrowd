vertebra = input()
specie = input()
familia = input()



if vertebra == "vertebrado":
    if specie == "ave":
        if familia == "carnivoro":
            print("aguia")
        else:
            print("pomba")
    else:
        if familia == "onivoro":
            print("homem")
        else:
            print("vaca")
else:
    if specie == "inseto":
        if familia == "hematofago":
            print("pulga")
        else:
            print("lagarta")
    else:
        if familia == "hematofago":
            print("sanguessuga")
        else:
            print("minhoca")

