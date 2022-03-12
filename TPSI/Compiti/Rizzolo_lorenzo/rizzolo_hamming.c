#include <stdio.h>
#include <math.h>

#define NBITS  4 // numero di bit per la codifica FLC
#define NCODES 4 // numero di codici dell'alfabeto

// print_code: stampa un simbolo dell'alfabeto
//
// Input: simbolo dell'algabeto da stampare
// Output: 
/*void print_code(......) {
  //inserisci qui il tuo codice
}*/

// hamming: calcola la distanza di hamming tra due simboli di uno stesso alfabeto
//
// Input: due simboli da confrontare
// Output: distanza di hamming
void hamming(int v[NCODES], int codec[NCODES][NBITS]) {
  //inserisci qui il tuo codice
  int dist=0;

  for(int i=0 ; i<NCODES ; i++){
      for(int j=0 ; j<NCODES ; j++){
          printf("distanza tra ");
          for(int n=0 ;n <NCODES ;n++){printf("%d", codec[i][n]);}printf(" e ");
          for(int n=0 ;n <NCODES ;n++){printf("%d", codec[j][n]);}printf(" = ");
          if(j!=i){
              if(v[i]>v[j]){
                  dist=v[i]-v[j];
              }else{
                  dist=v[j]-v[i];
              }
          }
          printf("%d\n", dist);
      }
  }
}
void converte(int codec[NCODES][NBITS]){
    int tot=0, v[NCODES];
    for(int i=0 ; i<NCODES ; i++){
        tot=0;
        for(int j=NBITS-1, n=0 ; j>=0; j--, n++){
            tot=tot+(codec[i][j]*pow(2,n));
        }
        v[i]=tot;
        printf("%d; ", tot);
    }
    printf("\n");
    hamming(v, codec);
}

// main: dato un alfabeto, stampa tutte le possibili distanze di hamming tra u sumboli
//       il programma deve stampare la seguente stringa
//       La distanza tra <simbolo 1> e <simbolo 2> = <distanza di hamming>
//
// Input: 
// Output: 
int main() {
    int codec[NCODES][NBITS] = 
    {
        {0, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 1, 1, 0},
    };
    //inserisci qui il tuo codice
    converte(codec);
    return 0;
}