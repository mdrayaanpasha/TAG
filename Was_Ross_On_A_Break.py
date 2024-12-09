def Was_Ross_On_A_Break(Hours):
    cheat = True
    for hour in Hours:
        if hour == "BREAK":
            cheat = False
        if hour == "DATE":
            return cheat
        

Hrs = ["DATE","BREAK","","","FIGHT"]
print(Was_Ross_On_A_Break(Hrs))
