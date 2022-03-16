#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

double entropia(int n_lettere, int frequenza[n_lettere], float Pi[n_lettere])
{
    double hs=0;                             
    for (int i = 1; i <= n_lettere; i++)
    {
        hs += (-1) * (Pi[i-1] * log2(Pi[i-1]));
    }
    return(hs);
}

void main()
{

char sequenza[20];

printf ("\nInserire la sequenza di lettere :\n");       
scanf ("%s", sequenza);

int i, y, k=0, l = strlen(sequenza);
int lettere[20] = {0}, count=0;

for (i=0; i<20; i++)
{
    for (y=0; sequenza[y] != 0; y++)
    {
        if (sequenza[y] == i+97)
        {
            lettere[i]++;
        }
    }
}

for (i=0; i<20; i++)
{
    if (lettere[i] != 0)
    {
        count++;
    }
}
float Pi[count]; 
int frequenza[count];

for (i=0; i<20; i++)
{
    if (lettere[i] != 0)
    {
        frequenza[k] = lettere[i];
        Pi[k] = (float)frequenza[k] / (float)l;
        k++;
    }
}

double hs = entropia(count, frequenza, Pi);

printf ("\n\nH(%s) = %lf bit/sym", sequenza, hs);


}