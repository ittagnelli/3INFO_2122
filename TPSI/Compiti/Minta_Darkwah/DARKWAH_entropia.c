#include <stdio.h>

void main ()
{
    int n, c = 0, c1 = 0, I, pro;

    printf("inserire la lunghezza dei simboli: ");
    scanf("%d", &n);
    
    char parola[n];

    for (int i = 0; i < n; i++)
    {
        printf("inserire dei simboli: ");
        scanf("%s", &parola[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            
            if (parola[i] != parola[j])
            {
                printf("%c <-- --> %c \n", parola[i], parola[j]);
                c++;
            }
            c1++;
        }

        I = c /c1;
        pro = sqrt(I) - 0;

        printf("%d", pro);
    }
}