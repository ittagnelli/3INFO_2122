/* Si richiede di scrivere un programma in C che fornita da linea di comando una stringa di 15 cifre, che
rappresenta il codice fiscale italiano di una persona, calcoli il check digit o cifra di controllo che rappresenta la
16ma ed ultima cifra di un codice fiscale valido
L’utente specifica da linea di comando i primi 15 caratteri del codice fiscale ed il programma stampa in output
su console il check digit calcolato.
Il programma deve verificare che la stringa inserita sia esattamente di 15 caratteri */



#include <stdio.h>
#include <string.h>


int main() 
{
  char carat;
  int r=0, s=0;
  int p=0, j=0, i=0; // contatori
  char f[16]; //frase da inserire
  int pari[16]; 
  int dispari[16];
  char vetp[8];
  char vettored[16];
  char alfabeto[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int npari[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int ndispari[]={1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 2, 4, 18, 20, 11, 3, 6, 8, 12, 14, 16, 10, 22, 25, 24, 23, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21}; 

  printf("l'utente inserisca una frase -->\n ");
  scanf("%s", f);

  for(i=1; i<16; i++)
  {if(i%2 == 0)
    {vetp[p] = f[i-1];
      p++;}
      
    else
    { vettored[j] = f[i-1];j++;}}
  
  for(i=0; i<strlen(vetp); i++)
    { for(j=0; j<strlen(alfabeto); j++)
        {if(vetp[i]==alfabeto[j])
          {s=s+npari[j];}}}
  
  for(i=0; i<strlen(vettored); i++)
    {for(j=0; j<strlen(alfabeto); j++)
        {if(vettored[i]==alfabeto[j])
          {s=s+ndispari[j];}}}

    r=s%26; // 26 perchè era il numero da dividere come dato dalle slide
  for(i=0; i<strlen(npari); i++)
    { if(npari[i]==r)
      {carat=alfabeto[i];}}
  printf("il risutato è --> %c \n", carat);
}
