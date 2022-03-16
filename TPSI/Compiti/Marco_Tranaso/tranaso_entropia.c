#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

float entropia(int lettere, int frequenza[lettere], float Pi[lettere])
{
    float t=0;                             
    for (int i = 1; i <= lettere; i++)
    {
        t += (-1) * (Pi[i-1] * log2(Pi[i-1]));
    }
    return(t);
}

void main()
{

char parola[20];

printf ("\n\nInserire la parola ");       
scanf ("%s", parola);

int i;
int y;
int j=0, l = strlen(parola);
int lettere[26] = {0}, cont_lettere=0;
float Pi[cont_lettere]; 
int frequenza[cont_lettere];

for (i=0; i<26; i++)
{
    for (y=0; parola[y] != 0; y++)
    {
        if (parola[y] == i+97)
        {
            lettere[i]++;
        }
    }
}

for (i=0; i<26; i++)
{
    if (lettere[i] != 0)
    {
        cont_lettere++;
    }
}

for (i=0; i<26; i++)
{
    if (lettere[i]!=0)
    {
        frequenza[j] = lettere[i];
        Pi[j] = (float)frequenza[j] / (float)l;
        j++;
    }
}

float t = entropia(cont_lettere, frequenza, Pi);

printf ("\n\nH(%s) = %f bit/sym", parola, t);


}