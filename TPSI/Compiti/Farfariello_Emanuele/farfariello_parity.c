/* si richiede di scrivere un programma in C che fornita da linea di comando una stringa composta da soli 0 e
1, calcoli il bit di parità.
L’utente specificherà anche, da linea di comando, il tipo di parità da calcolare, specificando P per parità pario
e D per parità dispari */

#include <stdio.h>
#include <string.h>

int main() 
{
  char vet[40]; //dichiarazione vettore
  char scelta; // variabile che serve per la scelta tra pari e dispari
  int i=0;    // contatore
  int tot;   // totale dell'operazione       strlen(vet)
  int t;    // variabile per il for
  int s; 
  
  printf("Scrivere se si vuole calcolare la sequenza in maniera pari o dispari --> \n");
  printf("selezionare 'p' se lo si vuole pari e 'd' se lo si vuoole dispari \n" );
  scanf("%c", & scelta);
  
  printf("Inserire sequenza di bit 0 e 1 --> \n");
  scanf("%s", vet);
  
  tot = strlen(vet);
    
    for(int t=0; t<tot; t++)
        {
            s = vet[t] -40;
            i=s + i;
        }
        
        if(i % 2==0)
        {
            if(scelta == 'P')
            { printf("bit di parita' --> 1"); }
            
            else
            { printf("bit di parita' --> 0"); }
        }

        if(i%2 != 0)
        {
            if(scelta == 'P')
            { printf("bit di parita' = 0"); }
            
            else
            { printf("bit di parita' = 1"); }
        }
}
