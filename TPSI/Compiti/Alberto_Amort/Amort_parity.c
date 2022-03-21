#include <stdio.h>
#include <string.h>


int main (int argc, char* argv[])
{
    argv[0]="Programma";
    argv[1]="P";
    argv[2]="0101011011";
    argc=3;
    int i;
    int parità;

    

    printf("%s %s %s", argv[0], argv[1], argv[2]);

    

    char *s=argv[2];
    char tipo_parita=*argv[1];



    while (i<argc)
    {
        if (s[i++]=='1')
        {
            parità++;
        }
    }

    printf("%d", parità);

    printf("\n");
    
    if (tipo_parita=='P')
    {
        if(parità%2==0)
        {
            printf("Il bit di parita' pari e' uguale a 0");
        }
        
        if(parità%2!=0)
        {
            printf("Il bit di parita' pari e' uguale a 1");
        }
    }

    if (tipo_parita=='D')
    {
        if(parità%2==0)
        {
            printf("Il bit di parita' dispari e' uguale a 1");
        }
        
        if(parità%2!=0)
        {
            printf("Il bit di parita' dispari e' uguale a 0");
        }
    }





    

}