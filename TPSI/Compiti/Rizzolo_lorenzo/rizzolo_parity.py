from lib2to3.pgen2.token import RPAR


def som(par,somma):
    for i in range(len(par)):
        n = int( par[i] )
        somma = somma + n
    return somma

def stampa(par,somma):
    for i in range(len(par)):
        print(par[i],end="")
    return 0

somma=0
p_o_d = input("inserisci P per la parità o D per la disparità: ")
parola = input("Inserisci la parola: ")
parola = str(parola)
somma = som(parola,somma)
if p_o_d == 'p' or p_o_d == 'P':
    if somma % 2 == 0:
        bit_par=0
        print("il bit di parità per ", end="") 
        stampa(parola,somma)
        print(" è ", bit_par)
        stampa(parola,somma)
        print(bit_par)
    else:
        bit_par=1
        print("il bit di parità per ", end="") 
        stampa(parola,somma)
        print(" è ", bit_par)
        stampa(parola,somma)
        print(bit_par)

if p_o_d == 'd' or p_o_d == 'D':
    if somma % 2 == 0:
        bit_par=1
        print("il bit di parità per ",end="") 
        stampa(parola,somma)
        print(" è ", bit_par)
        stampa(parola,somma)
        print(bit_par)
    else:
        bit_par=0
        print("il bit di parità per ", end="") 
        stampa(parola,somma)
        print(" è ", bit_par)
        stampa(parola,somma)
        print(bit_par)
