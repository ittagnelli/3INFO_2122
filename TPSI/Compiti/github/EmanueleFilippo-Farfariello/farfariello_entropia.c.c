#include <stdio.h>
#include <math.h>
#include <string.h>
#define DIM 5 

struct informazione
{
  float p; //probabilità
}v[DIM];

int main()
{
  char frase[DIM];
  char parola[DIM];
  float lettera;
  float n; //numero
  int i, j; 
  float entropia=0.0000, s=0.0000;
  
  printf("Inserire la parola: ");
  scanf("%s", frase);

  if(DIM<=20)
  {
    printf("La lunghezza della parola e\' minore di 20: %d\n", DIM);
  }

  else 
  {
    printf("La lunghezza della parola non e\' minore di 20: %d\n", DIM);
    return(0);
  }
  
  n = strlen(frase);

  for(i=0; i<DIM; i++)
  {
    lettera=0;

    for(j=0; j<DIM; j++)
    {
      if(frase[j]==frase[i])
      {
        lettera=lettera+1;
      }
    }
   
    v[i].p=(lettera/n);
    entropia=-(v[i].p*(log2(v[i].p)))/lettera;
    s=s+entropia;
    printf("La lettera %c si ripete %.2f volte, ha una probabilita\' pari a %.2f \n", frase[i], lettera, v[i].p);
  }
  printf("La sua entropia e\': %f\n", s); 
  return(1);
}