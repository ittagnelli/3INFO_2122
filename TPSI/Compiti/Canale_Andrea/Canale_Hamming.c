#include <stdio.h>

#define NBITS  4 // numero di bit per la codifica FLC
#define NCODES 4 // numero di codici dell'algabeto

// print_code: stampa un simbolo dell'algabeto
//
// Input: simbolo dell'algabeto da stampare
// Output: 
/*void print_code(......) {
  //inserisci qui il tuo codice
}

// hamming: calcola la distanza di hamming tra due simboli di uno stesso alfabeto
//
// Input: due simboli da confrontare
// Output: distanza di hamming
... hamming(.....) {
  //inserisci qui il tuo codice
}

// main: dato un alfabeto, stampa tutte le possibili distanze di hamming tra u sumboli
//       il programma deve stampare la seguente stringa
//       La distanza tra <simbolo 1> e <simbolo 2> = <distanza di hamming>
//
// Input: 
// Output: */
void main() { //non funzionante
    int p;
    int codec[NCODES][NBITS] = 
    {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {0, 1, 0, 1},
    };
    
    for(int i=0;i<4;i++){
        int distanza=0;
        for (int k = 0; k < 4; k++)
        {
            for(int l=1;l<4;l++){
            if(codec[i][k]==codec[l][i]){
                printf("%i è uguale a %i\n", codec[i][k], codec[l][i]);
            }else{
               printf("%i è diverso a %i\n", codec[i][k], codec[l][i]);
               distanza++;
            }
            }

            
        }
        printf("La distanza è uguale a: %i\n", distanza);
        p++;
    }
}
