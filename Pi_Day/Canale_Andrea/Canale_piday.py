count=1
pi=0
divisore=1
for i in range(1000):
    if count%2==0:
        pi=pi-(4/divisore)
    else:
        pi=pi+(4/divisore)
    count=count+1
    divisore=divisore+2
print("Il pigreco è uguale a " + str(pi))
