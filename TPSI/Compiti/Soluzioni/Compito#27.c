#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PARI    0
#define DISPARI 1

int count_one(char *sequence) {
    int num_1 = 0;

    for(int i = 0; i < (int)strlen(sequence); i++) {
        char bit = sequence[i];            
        switch(bit) {
            case '0':
                break;
            case '1':
                num_1++;
                break;
            default:
                return -1;  
        }
    }
    return num_1;
}

int parity_bit(char *sequence, char parity) {
    int paritybit = -1;
    int num_1 = 0;
    int word_even = 0;

    if ((num_1 = count_one(sequence)) == -1)
        return -1;

    word_even = num_1 % 2;
    
    switch(parity) {
        case 'P':
            if (word_even == PARI)
                paritybit = 0;
            else
                paritybit = 1;
            break;
        case 'D':
            if (word_even == DISPARI)
                paritybit = 0;
            else
                paritybit = 1;
            break;
        default:
            break;
    }
    return paritybit;
}

int main(int argc, char *argv[]) {
    int bitparity = 0;
    char parity = 0;

    if (argc != 3) {
        printf("Usage: %s P|D <parola binaria>\n", argv[0]);
        exit(1);
    }

    parity = argv[1][0];
    if ((parity != 'P') && (parity != 'D')) {
        printf("Necessario specificare il tipo di parità (P|D)\n");
        exit(1);
    }
    
    if((bitparity = parity_bit(argv[2], parity)) == -1) {
        printf("La parola inserita non è binaria\n");
        exit(1);
    } else
        printf("Il bit di parità per la parola %s è %d\n", argv[2], bitparity);

    return 0;
}