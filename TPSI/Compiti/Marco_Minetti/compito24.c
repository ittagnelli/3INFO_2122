#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fenv.h>
#define long 4
void main {
    int v = 0, var = 1, prod, vett[long], j, i, bit, simboli = long, n;
    float l, tot, bit;
    printf("inserisci i caratteri");
    for ( i = 0; i < long; j++) {
        scanf("%c", &vett[i]);
    }
    for ( j = 0; j < long; j++) {       // leggo la stringa
        v=0;                            // resetto le variabili
        var=1;
        while ( v < j ) {           // verifico che sia il primo
            if ( long[j] != long [v] ) {        // verifico davanti
                for ( i = 0; i < long; i++) {       // verifico dietro
                    if ( long[j] == long[i]) {      // verifico quanti sono uguali
                        var++;                      // incremento quante volta ce un simbolo
                        simboli--;
                    }
                }
                prod=var/long;                      //faccio il prodotto
                l= log(prod)*log(2);                //calcolo il log
                tot += l;                           //calcolo la frequenza
                v++;
            }
            else {
                v=j+1;
            }
        }
    }
    bit=ceil(+tot);                             // calcolo i bit necessari                   
    int tab [simboli][tot];
    int vet[20];

    for ( i = 0; i < tot; i++) {
        n=i;
        dec=0;
        while (n!=0) {
            if (n%2 == 1) 
            vet[dec] = 1;
            else
            vet[dec] = 0;
            n /= 2;
            dec++;
        }
        for ( j = 0; j < simboli; j++) {
            tab [i][j]= vet[j];
        }
    }
    int s = 0, r = 0;
    for ( i = 0; i < simboli; i++) {
        for ( j = 0; j < tot; j++) {
            
        }
    }
}