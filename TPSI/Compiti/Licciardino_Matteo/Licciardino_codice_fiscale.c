#include <stdio.h>
#include <string.h>

int main()
{
    char parola[16];
    int s=0; // la variabile somma
    char lettere[36] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
    int  num_pari[36] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,0,1,2,3,4,5,6,7,8,9};
    int  num_dispari[36] = {1,0,5,7,9,13,15,17,19,21,2,4,18,20,11,3,6,8,12,14,16,10,22,25,24,23,1,0,5,7,9,13,15,17,19,21};
    char pari[36], dispari[36];
    int numero_di_controllo = 0; // inizia a fare tutti i passaggi per ottenere il numero di controllo
    int numero_di_controllo_finale = 0; // il risultato di tutti i passaggi per ottenere il numero di controllo
    int z; // variabile che inizia a dividere le le lettere e i numeri a seconda della loro posizione
    int x; // variabile che indica le posizioni pari
    int y; // variabile che indica le lettere nella posizione pari
    int a; // variabile che indica le posizioni dispari
    int b; // variabile che indica le lettere nella posizione dispari
    int cont_pari=0; //contatore delle posizioni pari del codice fiscale
    int cont_dispari=0; //contatore delle posizioni dispari del codice fiscale
    printf("Inserire il codice fiscale: ");
    scanf("%s", parola);
    
    if(strlen(parola)!=15)
    {
        printf("Il codice non valido: %s", parola);
        return (0);
    }

    for(z=1; z<16; z++)
    {
        if(z%2==0)
        {
            pari[cont_pari]=parola[z-1];
            cont_pari++;
        }
        
        else
        {
            dispari[cont_dispari]=parola[z-1];
            cont_dispari++;
        }
    }

    for(x=0; x<cont_pari; x++)
    {
        for(y=0; y<36; y++)
        {
            if(pari[x]==lettere[y])
            {
                s=s+num_pari[y];
            }
        }
    }
    
    printf("\n");

    for(a=0; a<cont_dispari; a++)
    {
        for(b=0 ; b<36 ; b++)
        {
            if(dispari[a]==lettere[b])
            {
                s=s+num_dispari[b];
            }
        }
    }

    numero_di_controllo = s / 26;
    numero_di_controllo_finale = (s-(26*numero_di_controllo));
    printf("la lettera di controllo per questo codice fiscale e\': %s\n", parola);
    printf("E\' %c\n", lettere[numero_di_controllo_finale]);
    printf("Il codice fiscale e\': %s%c", parola, lettere[numero_di_controllo_finale]);
    return(1);
}
