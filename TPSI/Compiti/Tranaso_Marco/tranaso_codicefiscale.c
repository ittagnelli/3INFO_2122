#include <stdio.h>
#include <string.h>

int main(){

    char parola[16];
    int s = 0;
    int cont_pari=0;
    int cont_dispari=0;
    char pari[26];
    char dispari[26];
    int  num_pari[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int  num_dispari[26] = {1,0,5,7,9,13,15,17,19,21,2,4,18,20,11,3,6,8,12,14,16,10,22,25,24,23};
    char let[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("inserire codice fiscale ");
    scanf("%s", &parola);

     if (strlen(parola)<15) 
        printf("il codice fiscale inserito non e valido");

    for(int i=1 ; i<16 ; i++)
    {
        if(i%2==0)
        {
            pari[cont_pari]=parola[i-1];
            cont_pari++;
        }
        else
        {
            dispari[cont_dispari]=parola[i-1];
            cont_dispari++;
        }
    }
    for(int i=0 ; i<cont_pari ; i++)
    {
        for(int j=0 ; j<26 ; j++)
        {
            if(let[j]==pari[i])
                s=s+num_pari[j];
        }
    }
     
    for(int i=0 ; i<cont_dispari ; i++)
    {
        for(int j=0 ; j<26 ; j++)
        {
            if(let[j]==dispari[i])
                s=s+num_dispari[j];
        }
    }
    
    int check = s%26;
    printf("il carattere di controllo per il codice fiscale %s", parola);
    printf(" e %c", let[check]);
}
