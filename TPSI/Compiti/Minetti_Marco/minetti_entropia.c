#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 20
void main () {
    char vett[N];
    int l;
    printf("inserisci i caratteri: ");
    scanf("%s", vett);
    l = strlen(vett);
    int v = 0, var = 1, j, i;
    float t, tot=0, prod;
    for ( j = 0; j < l; j++) {       // leggo la stringa
        v=0;                            // resetto le variabili
        var=1;
        while ( v < j ) {           // verifico che sia il primo
            if ( vett[j] != vett[v] ) {        // verifico davanti
                for ( i = 0; i < l; i++) {       // verifico dietro
                    if ( vett[j] == vett[i]) {      // verifico quanti sono uguali
                        var++;                      // incremento quante volta ce un simbolo
                    }
                }
                prod=(float)var/l;                      //faccio il prodotto
                l= log(prod)*log(2);                //calcolo il log
                tot = tot - t;                           //calcolo la frequenza
                v++;
                printf("%f", prod);
            }
            else {
                v=j+1;
            }
        }
    }
    printf("%s", vett);
    printf("\n-\n%f", tot);
}
