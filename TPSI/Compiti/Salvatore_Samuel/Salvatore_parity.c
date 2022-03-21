#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 1000

int main()
{
    char vet[N];
    char parity;
    int cont = 0;
    printf("Inserire sequenza binaria: ");
    scanf("%s", vet);
    int lung = strlen(vet);
    for (int i = 0; i < lung; i++)
    {
        if (vet[i] == 1)
        {
            cont++;
        }
    }
    printf("\nInserire 'D' per visualizzare parita' dispari, 'P' pari: ");
    scanf("%c", parity);
    if (toupper(parity) == 'D')
    {
        if (cont %2 == 0)
        {
            printf("\nil bit di parita' per %s e' 1", vet);
        }
        else
        {
            printf("\nil bit di parita' per %s e' 0", vet);
        }
        
    }
    else if (toupper(parity) == 'P')
    {
        if (cont %2 == 0)
        {
            printf("\nil bit di parita' per %s e' 0", vet);
        }
        else
        {
            printf("\nil bit di parita' per %s e' 1", vet);
        }
    }
    else
    {
        printf("\nErrore");
    }

    return 0;
}