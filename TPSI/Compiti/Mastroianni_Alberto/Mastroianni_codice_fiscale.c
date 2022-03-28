#include <stdio.h>
#include <string.h>
int main() 
{
  char car;
  int resto=0;
  int somma=0;
 int j=0;
  int k=0;
  char frase[16];
  char lettere[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int numeri_pari[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int numeri_dispari[]={1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 2, 4, 18, 20, 11, 3, 6, 8, 12, 14, 16, 10, 22, 25, 24, 23, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21};

  int pari[16];
  int dispari[16];
  char arrayp[8];
  char arrayd[16];

  printf("Inserisci una frase: ");
  scanf("%s", frase);

  for(int i=1; i<16; i++)
  {
    if(i%2==0)
    {
      arrayp[j]=frase[i-1];
      j++;
    }
    else
    {
      arrayd[k]=frase[i-1];
      k++;
    }
  }
  for(int i=0; i<strlen(arrayp); i++)
    {
      for(int j=0; j<strlen(lettere); j++)
        {
          if(arrayp[i]==lettere[j])
          {
            somma=somma+numeri_pari[j];
          }
        }
    }

  for(int i=0; i<strlen(arrayd); i++)
    {
      for(int j=0; j<strlen(lettere); j++)
        {
          if(arrayd[i]==lettere[j])
          {
            somma=somma+numeri_dispari[j];
          }
        }
    }
  resto=somma%26;

  for(int i=0; i<strlen(numeri_pari); i++)
    {
      if(numeri_pari[i]==resto)
      {
       car=lettere[i];
      }
      
    }
  printf("Risultato: %c", car);
}


 