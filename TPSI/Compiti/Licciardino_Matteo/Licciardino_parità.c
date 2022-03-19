#include <stdio.h>
#include <string.h>
#define n 50 // modificare la lunghezza della sequenza

void main()
{
    int i=0;
    int bit=0;
    int lungh;
    int vet[n];
    printf("Inserire una serire di 0 e 1: ");
    scanf("%s", vet);
    lungh=strlen(vet);
    
    for(i=0; i<lungh; i++)
    {
        if(vet[i]==1)
        {
            bit++;
        }
    }

    if(bit%2==0)
    {
        printf("Il bit di parita\' pari e\' %s0\n",  vet);
    }

    else
    {
        printf("Il bit di parita\' pari e\' %s1\n",  vet);
    }

    if(bit%2==1)
    {
        printf("Il bit di parita\' dispari e\' %s0\n",  vet);
    }

    else
    {
        printf("Il bit di parita\' dispari e\' %s1\n",  vet);
    }
}