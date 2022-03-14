#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

struct info
{
    char lettera;
    int frequenza;
    float Pi;
    float I;
};


void main()
{
int hs =0;
char parola[20];

printf ("\n\nInserire la parola:\t");
scanf ("%s", parola);

int i, y, k=0, l = strlen(parola);
int lettere[20] = {0}, cont_let=0;

for (i=0;i<l;i++)
{
    parola[i] = tolower(parola[i]);
}

for (i=0; i<20; i++)
{
    for (y=0; parola[y] != 0; y++)
    {
        if (parola[y] == i+97)
        {
            lettere[i]++;
        }
    }
}

for (i=0; i<20; i++)
{
    if (lettere[i] != 0)
    {
        cont_let++;
    }
}
struct info let[cont_let];

float log2 = log(2);

for (i=0; i<20; i++)
{
    if (lettere[i] != 0)
    {
        let[k].lettera = i+97;
        let[k].frequenza = lettere[i];
        let[k].Pi = let[k].frequenza / (float)l;
        let[k].I = (log(let[k].Pi) / log2) * (-1);
        k++;
    }
}
for(int i=0; i<lettere[i]; i++)
{
    
    hs= -(let[i].frequenza*(log(let[k].frequenza)/0,301));
 
}

printf("l'entropia della parola %s e' %d", parola, hs);
}