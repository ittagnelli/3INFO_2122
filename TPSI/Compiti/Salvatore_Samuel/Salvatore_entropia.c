#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 20

struct informazione
{
  float proba;
}k[N];

int main()
{
  char frase[N];
  char parola[N];
  float letter, entropia = 0.0, somma = 0.0;
  
  printf("Inserire una parola (massimo 20 caratteri): ");
  scanf("%s", frase);
  int lung = strlen(frase);
  for(int i = 0; i < lung; i++)
  {
    letter=0;

    for(int j = 0; j < lung; j++)
    {
      if(frase[j] == frase[i])
      {
        letter = letter + 1;
      }
    }
   
    k[i].proba = letter / lung;
    entropia= -(k[i].proba * log2(k[i].proba)) / letter;
    somma = somma + entropia;
    printf("La lettera %c si ripete %.2f volte, ha una probabilita' pari a %.2f \n", frase[i], letter, k[i].proba);
  }
  printf("La sua entropia e': %f\n", somma); 
  return 0;
}