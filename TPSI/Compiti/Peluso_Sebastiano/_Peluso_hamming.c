/********************************************************************
Partendo dal template di codice fornito (vedi link sotto), realizzare
un programma in C che calcola la distanza di Hamming per tutte i
simboli di un alfabeto S, espresso come un array bidimensionale.
********************************************************************/


#include <stdio.h>

#define NBITS  4 // numero di bit per la codifica FLC
#define NCODES 4 // numero di codici dell'algabeto



// print_code: stampa un simbolo dell'alfabeto
//
// Input: simbolo dell'alfabeto da stampare
// Output: stampa il valore
void print_code(int simbolo[]) 
{
    for (int i = 0; i < NBITS; i++)
    {
        printf("%d ", simbolo[i]);    
    }
    
}

// hamming: calcola la distanza di hamming tra due simboli di uno stesso alfabeto
//
// Input: due simboli da confrontare
// Output: distanza di hamming
int hamming(int simbolo1[], int simbolo2[]) 
{

  int distanza = 0;

  for (int  j = 0; j < NBITS; j++)
  {
      if (simbolo1[j] != simbolo2[j])
      {
          distanza++;
      }


      
  }
  
    return (distanza);


}

// main: dato un alfabeto, stampa tutte le possibili distanze di hamming tra u sumboli
//       il programma deve stampare la seguente stringa
//       La distanza tra <simbolo 1> e <simbolo 2> = <distanza di hamming>
//
// Input: 
// Output: 
void main()
{
    int distanza;

    int codec[NCODES][NBITS] = 
    {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {0, 1, 0, 1},
    };
    
    distanza = hamming(codec[1], codec[3]);

    printf("La distanza tra ");
    print_code(codec[1]); 
    printf(" e ");
    print_code(codec[3]);
    printf(" = %d", distanza);
    
}