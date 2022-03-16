
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define EMPTY_SIMBOL 0
#define MAX_SEQUENCE 20

// definisco il tipo simbolo
typedef struct {
    char  sym;    //simbolo
    int   occur;  //numero di occorrenze
} simbolo;

// inizializza la tabella dei simboli
void init_symbol_table(simbolo simboli[MAX_SEQUENCE]) {
    for(int i = 0; i < MAX_SEQUENCE; i++) {
        simboli[i].sym = EMPTY_SIMBOL;
        simboli[i].occur = 0;
    }
}

// cerca un simbolo s nella tabella dei simboli
// se lo trova restituisce la posizione
// altrimenti -1
int search_symbol_table(char s, simbolo simboli[MAX_SEQUENCE]) {
    for(int i = 0; i < MAX_SEQUENCE; i++) {
        if (simboli[i].sym == s)
            return i;
    }
    return -1;
}

// calcola le occorrenze di un simbolo e la sua frequenza
void calc_symbol_occur(char s, int num_sym, simbolo simboli[MAX_SEQUENCE]) {
    int idx;

    if ((idx = search_symbol_table(s, simboli)) >= 0) {
        simboli[idx].occur +=1;
    } else {
        if ((idx = search_symbol_table(EMPTY_SIMBOL, simboli)) >= 0) {
            simboli[idx].sym = s;
            simboli[idx].occur = 1;
        }    
    }
}


float calc_entropy(int len_word, simbolo simboli[MAX_SEQUENCE]) {
    float entropy = 0;

    for(int i = 0; i < MAX_SEQUENCE; i++) {
        if (simboli[i].occur > 0) {
            float pi = simboli[i].occur / 1.0 / len_word;
            entropy += (pi * -log2f(pi));
        }
    }
    return entropy;
}

int main() {
    char parola[MAX_SEQUENCE + 1];
    simbolo simboli[MAX_SEQUENCE];
    
    // Richiedo la parola o sequnza di simboli in input
    printf("Inserisci una parola (MAX %d caratteri) e premi invio:", MAX_SEQUENCE);
    scanf("%20s", parola);

    // determino la lunghezza della parola inserita
    int len_word = strlen(parola);

    // inizializzo la tabella dei simboli
    init_symbol_table(simboli);

    for(int i = 0; i < len_word; i++)
        calc_symbol_occur(parola[i], len_word, simboli);
        
    float entropy = calc_entropy(len_word, simboli);
    printf("H(%s) = %f\n", parola, entropy);

    return 0;
}