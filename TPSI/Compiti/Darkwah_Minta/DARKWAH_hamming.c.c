#include <stdio.h>

void main ()
{
    int n;

    printf("inserire la lunghezza dell'array: ");
    scanf("%d", &n);

    char S[n], c[n], ris;

    for (int i = 0; i < n; i++)
    {
        printf("inserire dei simboli: ");
        scanf("%s", &S[i]);

        printf("inserire la codifica per ogni simbolo: ");
        scanf("%d", &c[i]);
    }


    for (int i = 0; i < n; i++)
    {
        ris = 0;
        for (int j = 1; j < n; j++)
        {

            if (i == n - 1)
            {
                printf(" ");
            }
            else if (S[i] != S[j])
            {
                
                ris = c[j] - c[i];
                printf("%c", S[i]);
                printf("  << >>  ");
                printf("%c ", S[j]);
                printf(" --> ");
                printf("%d \n", ris);
            }
            
            
        }
    }

}