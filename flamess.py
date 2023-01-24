def flames(name1,name2):
    namestr = name1 + name2

    for c in namestr:
        if namestr.count(c) != 1:

            namestr = namestr.replace(c,"")



    print("F = Friend \nL = Love \nA = Affection \nM = Marriage \nE = Enemy \nS = Siblings \n\n")
    

    number = len(namestr) % 6

    rel = ""

    if number == 1:
        rel += "Friends"
    elif number == 2:
        rel += "Love"
    elif number == 3:
        rel += "Affection"
    elif number == 4:
        rel += "Marriage"
    elif number == 5:
        rel += "Enemy"
    elif number == 0:
        rel += "Siblings"
    else:
        pass

    return rel



print(flames("Eklavya", "Shubhangi"))