#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CF_LEN 15
#define CAR2VAL 36
#define RESTO2VAL 26

typedef struct {
    char car;
    int val;
} char2value;

int cha2val_pari(int c) {
    char2value mapping_pari[CAR2VAL] = {
        {'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5},
        {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'A', 0}, {'B', 1},
        {'C', 2}, {'D', 3}, {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7},
        {'I', 8}, {'J', 9}, {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13},
        {'O', 14}, {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
        {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}
    };

    for(int i = 0; i < CAR2VAL; i++) {
        if (mapping_pari[i].car == c)
            return mapping_pari[i].val;
    }
}

int cha2val_dispari(int c) {
    char2value mapping_dispari[CAR2VAL] = {
        {'0', 1}, {'1', 0}, {'2', 5}, {'3', 7}, {'4', 9}, {'5', 13},
        {'6', 15}, {'7', 17}, {'8', 19}, {'9', 21}, {'A', 1}, {'B', 0},
        {'C', 5}, {'D', 7}, {'E', 9}, {'F', 13}, {'G', 15}, {'H', 17},
        {'I', 19}, {'J', 21}, {'K', 2}, {'L', 4}, {'M', 18}, {'N', 20},
        {'O', 11}, {'P', 3}, {'Q', 6}, {'R', 8}, {'S', 12}, {'T', 14},
        {'U', 16}, {'V', 10}, {'W', 22}, {'X', 25}, {'Y', 24}, {'Z', 23}
    };

    for(int i = 0; i < CAR2VAL; i++) {
        if (mapping_dispari[i].car == c)
            return mapping_dispari[i].val;
    }
}

char resto2char(int resto) {
    char2value mapping_resto[RESTO2VAL] = {
        {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}, 
        {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9}, 
        {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14}, 
        {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
        {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, 
        {'Z', 25}
    };

    for(int i = 0; i < RESTO2VAL; i++) {
        if (mapping_resto[i].val == resto)
            return mapping_resto[i].car;
    }
}

char compute_check_digit(char *cod_fisc) {
    int sum_values = 0;
    
    for(int i = 0; i < CF_LEN; i++) {
        if (i % 2)
            sum_values += cha2val_pari(cod_fisc[i]);
        else
            sum_values += cha2val_dispari(cod_fisc[i]);
    }
    return resto2char(sum_values % 26);
}

int main(int argc, char *argv[]) {
    
    
    if ((argc != 2) || (strlen(argv[1]) != CF_LEN)) {
        printf("Usage: %s <codice fiscale di 15 caratteri>\n", argv[0]);
        exit(1);
    }

    printf("Il carattere di controllo per il codice fiscale %s e' %c\n", argv[1], compute_check_digit(argv[1]));

    return 0;
}