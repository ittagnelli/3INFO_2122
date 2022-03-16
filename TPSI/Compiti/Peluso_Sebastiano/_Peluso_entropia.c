/***************************************************************
Si
richiede di realizzare un programma in linguaggio C che richieda
all’utente di inserire una
sequenza S di simboli
(parola)
da tastiera.



Il
programma deve calcolare e stampare sulla console:

-
la
sequenza di simboli S

-
l’entropia
H(s) della sequenza


Di
seguito un esempio dell’esecuzione del programma


Inserisci
una parola (MAX 20 caratteri) e premi invio: MAMMA


H(MAMMA)
= 0.971 bit/s

********************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>



struct simbolo
{
    char lettera;
    float prob;
    double entropia;
    int frequenza;


};


#define S 50

int main()
{



    char sequenza[S];
    int i=0;
    int j=0;
    int cont = 0;
    double entropia_tot = 0.0;


    struct simbolo simboli[26]={{'A',0,0,0},{'B',0,0,0},{'C',0,0,0},{'D',0,0,0},{'E',0,0,0},{'F',0,0,0}, {'G',0,0,0}, {'H',0,0,0},{'I',0,0,0},{'J',0,0,0},{'K',0,0,0},
    {'L',0,0,0},{'M',0,0,0},{'N',0,0,0},{'O',0,0,0},{'P',0,0,0},{'Q',0,0,0},{'R',0,0,0},{'S',0,0,0},{'T',0,0,0},{'U',0,0,0},{'V',0,0,0},{'W',0,0,0},{'X',0,0,0},{'Y',0,0,0},
    {'Z',0,0,0}};


    printf("inserire la parola:\n");
    fgets(sequenza, sizeof(sequenza), stdin);

    printf("la parola inserita e': ");



while (sequenza[i] != '\0')
    {
        printf("%c", sequenza[i]);
        


        i++;
    }

    
    

    while(sequenza[i] != '\0')
    {
        while(j<26)
        {
            if (sequenza[i]==simboli[j].lettera)
            {
               simboli[j].frequenza= simboli[j].frequenza+1;
               simboli[j].prob=(simboli[j].frequenza/sizeof(sequenza))*10;
                simboli[j].entropia= (double)simboli[j].prob*(log2(simboli[j].prob));
            }
            j++;
        }
        j=0;
        i++;
    }

    for (int k = 0; k < 26; k++)
    {
        entropia_tot += simboli[j].entropia;
        
    }
    
    entropia_tot = entropia_tot * -1;
    i=0;

    printf("\n H(");
    while (sequenza[i] != '\0')
    {
        printf("%c", sequenza[i]);
        


        i++;
    }

    printf(") = ");

    printf("%f", entropia_tot);

    return 0;

}
