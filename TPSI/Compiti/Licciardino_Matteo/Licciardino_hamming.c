#include <stdio.h>

#define NBITS  4 // numero di bit per la codifica FLC
#define NCODES 4 // numero di codici dell'alfabeto
void main() 
{
    int c;  // contatore di colonne dei numeri di codici dell'alfabeto
    int codec[NCODES][NBITS] =
    {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {0, 1, 0, 1},
    };
   
    for(int i=0;i<4;i++)
    {
        int d=0; // distanza di hamming
        for (int j = 0; j < 4; j++)
        {
            if(codec[0][i]==codec[j][i])
            {
                printf("%d e\' uguale a %d\n", codec[0][i], codec[j][i]);
            }
            
            else
            {
               printf("%d e\' diverso a %d\n", codec[0][i], codec[j][i]);
               d++;
            }
           
        }
        printf("La distanza e\' uguale a: %d\n", d);
        printf("\n");
        c++; // incremento il contatore delle colonne dei numeri di codice dell'alfabeto
    }
}
