#include<stdio.h>
#include<string.h>

void pari(int l, int totale, char *n)
{
    printf ("\n\nIl bit di parita' pari per la parola ");
    for (int i = 1; i < l; i++)
    {
        printf ("%d", n[i]-48);
    }
    printf (" e' %d", totale%2);
}

void dispari(int l, int totale, char *n)
{
    printf ("\n\nIl bit di parita' dispari per la parola ");
    for (int i = 1; i < l; i++)
    {
        printf ("%d", n[i]-48);
    }
    printf (" e' %d", !(totale%2));
}

int controllo(char n[20])
{
    int no;
    if (n[0] != 'P' && n[0] != 'D')
    {
        printf ("\n\nInserimento errato, necessario specificare il tipo di parità (P|D)");
        no++;
    }
    return(no);
}

int tot(int l, char *n)
{
    int tot=0;
    for (int i = 1; i < l; i++)
    {
        tot += n[i]-48;
    }
    return(tot);
}

void main()
{

char n[20];

printf ("\n\nInserire P per la parita' pari, D per la parita' dispari e poi successivamente il numero binario che si desidera:\t");
gets(n);

int ok = controllo(n);

if (ok != 1)
{
    int l = strlen(n);
    int totale = tot(l, n);
    n[0] == 'P' ? pari(l, totale, n) : dispari(l, totale, n);
}

}