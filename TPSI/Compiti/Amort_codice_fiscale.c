#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int char_pari (char lettera);
int char_dispari (char lettera);
int codice_fiscale(char codice[]);


    char lettere[37] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    int dispari[37]={1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 1, 0,  5, 7, 9, 13, 15, 17, 19, 21, 2, 4, 18, 20, 11, 3, 6, 8, 12, 14, 16, 10, 22, 25, 24, 23};
    int pari[37]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    char digit[37] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};



int codice_fiscale(char codice[]) 
{
    int sum_pari;
    int sum_dispari;
        for(int i = 0; i < 16; i++) 
    {
        if (i%2==0)
        {
            sum_pari=sum_pari + char_pari(codice[i]);
        }

        if (i%2!=0)
        {
            sum_dispari=sum_dispari+char_dispari(codice[i]);
        }
    }

    printf("%d+%d=", sum_pari, sum_dispari);
    return sum_pari + sum_dispari;
}

int char_pari (char lettera)
{
    
    
    int numero;
    
    
    for   ( int i = 0; i < (int)strlen(lettere) && lettera==lettere[i]; i++)
    { 
        numero=  pari[i];
    }
    return numero;
}



int char_dispari (char lettera)
{
    int numero;
    
    
   for   ( int i = 0; i < (int)strlen(lettere) && lettera==lettere[i]; i++)
    {    
        numero=  dispari[i];
    }
    return numero;
}




int main(int argc, char *argv[]) 
{
    char parola[16];  
    argv[16]="DPPP";  
    
    if (argc == 1) {
        printf("Usage: %s <parola binaria>\n", argv[0]);
        exit(1);
    }

    strcpy(parola, argv[1]);

    int num_totale=codice_fiscale(parola);
    printf("%d\n", num_totale);
    printf("%d%%26=", num_totale);
    num_totale=num_totale%26;
    printf("%d\n", num_totale);    
    printf("Checkdigit=%c", digit[num_totale]);
}