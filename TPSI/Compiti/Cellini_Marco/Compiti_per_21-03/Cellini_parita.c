#include<stdio.h>
#define n_bits 8        //inserire il numero di bits del codice

void print(int n[n_bits], int x)
{
    printf ("\n\nIl bit di parita' pari e' %d e il codice finale e' --> ", x);
    for (int i = 0; i < n_bits; i++)
    {
        printf ("%d", n[i]);
    }
    printf ("%d", x);
    printf ("\n\nIl bit di parita' dispari e' %d e il codice finale e' --> ", !x);
    for (int i = 0; i < n_bits; i++)
    {
        printf ("%d", n[i]);
    }
    printf ("%d", !x);
}

void parita(int n[n_bits])
{
    int tot=0;
    for (int i = 0; i < n_bits; i++)
    {
        tot += n[i];
    }

    if (tot % 2 == 0)
    {
        print(n, 0);   
    }
    else
    {
        print(n, 1);
    }
}

void main()
{

int n[n_bits];

printf ("\n\nInserire il numero binario\n\n");
for (int i = 0; i < n_bits; i++)
{
    printf ("Inserire la %d cifra:\t", i+1);
    scanf ("%d", &n[i]);
}

parita(n);

}