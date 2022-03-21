#include <stdio.h>
#include <string.h>


void print(char num[20],int l)
{

    for(int i=0 ; i<l ; i++)
    {
            int n=num[i]-48;
            printf("%d",n);
        }
}

void main(){

    int s=0;
    int parit=0;
    int disparit=0;
    char numero[20];
    char parola;

    printf("\ninserisci P per parita pari oppure D per parita dispari e il numero in binario "); 
    scanf("%c""%s", &parola, numero);
    int l=strlen(numero);
    for(int i=0 ; i<l ; i++){
        int n=numero[i]-48;
        s=s+n;
    }
    if (s%2!=0)
{
        parit=1;
        disparit=0;

        if(parola=='P')
        {
        printf("Il bit di parita pari per ");
        print(numero,l);
        printf(" e ");
        printf("%d", parit);
        }
        else
        printf("parametro non valido");
        if(parola=='D')
        {
        printf("Il bit di parita dispari per ");
        print(numero,l);
        printf(" e ");
        printf("%d", disparit);
        }
   }
}

