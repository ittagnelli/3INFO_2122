import math
from math import log

parola=input("inserisci simboli-> ")
contatore=0
somma=0
    
for i in range(len(parola)):
    contatore=0
    car=parola[i]
    for j in range(len(parola)):
        if car==parola[j] and car!="0":
            parola[j].replace( parola[j],"0")
            contatore = contatore + 1
    l=contatore/len(parola)
    entr=-(l*log(l,2))/contatore
    somma=somma+entr
    print("| ",car,"-> freq: ",contatore," su ",len(parola)," | entropia-> ",entr)
print("entropia totale->  ", somma)
