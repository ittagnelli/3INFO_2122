somma=0
somma=int(somma)
v=[]
bi=input("quanti bit vuoi inserire? -> ")
bi=int(bi)
for i in range(bi):
    n=input("inserisci bit-> ")
    n=int(n)
    somma=somma+n
    v.append(n)
if somma%2==0:
    b='0' 
    print("bit di parita'= "+b)
    
else:
    print("bit di parita'= "+1)
    b=1
    b=int(b)

for i in range(bi):
    print(v[i], end="")
print(b)