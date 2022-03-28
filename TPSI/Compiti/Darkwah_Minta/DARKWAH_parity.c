#include <stdio.h>

void main ()
{
    int n = 5, str[n], c = 0;
    char parità;

    printf("inserire una stringa: ");
    scanf("%d", &str);

    printf("inserire la parita' pari(P) o dispari(D): ");
    scanf("%s", &parità);

    if (parità == 'P')
    {
        printf("inserita la parita' pari \n \nil codice finale: ");
        for (int i = 0; i < n; i++)
        {

            if (str[i] == 1)
            {
                c++;

            }

        }

        printf("%d", str);

        if (c%2 == 0)
        {
            printf(" %d e il bit di parita' e' 0");
        }
        else
        {
            printf(" %d e il bit di parita' e' 1");
        }
    }
    else if (parità == 'D')
    {
        printf("inserita la parita' dispari \n \nil codice finale: ");

        for (int i = 0; i < n; i++)
        {

            if (str[i] == 1)
            {
                c++;
            }

        }

        printf("%d", str);

        if (c%2 == 0)
        {
            printf(" %d e il bit di parita' e' 1");
        }
        else
        {
            printf(" %d e il bit di parita' e' 0");
        }
    }

}