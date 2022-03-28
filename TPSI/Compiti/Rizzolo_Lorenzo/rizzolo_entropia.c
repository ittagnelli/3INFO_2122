#include <stdio.h>
#include <math.h>
#include <string.h>
#define d 5 // modificare lunghezza della parola

struct informazione
{
  float proba;

  //float quant;

}k[d];

int main()
{
  char frase[d];
  char parola[d];
  float letter;
  float num;
  int i;
  int j;
  float entropia=0.0000, somma=0.0000;
  
  printf("Inserire la parola: ");
  scanf("%s", frase);

  if(d<=20)
  {
    printf("La lunghezza della parola e\' minore di 20: %d\n", d);
  }

  else 
  {
    printf("La lunghezza della parola non e\' minore di 20: %d\n", d);
    return(0);
  }
  
  num=strlen(frase);

  for(i=0; i<d; i++)
  {
    letter=0;

    for(j=0; j<d; j++)
    {
      if(frase[j]==frase[i])
      {
        letter=letter+1;
      }
    }
   
    k[i].proba=(letter/num);
    //k[i].quant=-(log2(k[i].proba));
    entropia=-(k[i].proba*(log2(k[i].proba)))/letter;
    somma=somma+entropia;
    printf("La lettera %c si ripete %.2f volte, ha una probabilita\' pari a %.2f \n", frase[i], letter, k[i].proba /*,k[i].quant*/);
  }
  printf("La sua entropia e\': %f\n", somma); 
  return(1);
}