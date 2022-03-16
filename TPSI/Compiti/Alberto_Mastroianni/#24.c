#include <stdio.h>
#define NBITS 4
#define NCODES 4 

void main() 
{
    int g;
    int i=0;
    int j=0;
    
    int codec[NCODES][NBITS] = 
    {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {0, 1, 0, 1},
    };
    
    for( i=0;i<4;i++){
        int d=0;
        for (j = 0; j < 4; j++)
        {
            if(codec[0][i]==codec[j][i])
            {
                printf("%d e' uguale a %d\n", codec[0][i], codec[j][i]);
            }
            else{
               printf("%d e' diverso a %d\n", codec[0][i], codec[j][i]);
               d++;
            }
            
        }
        printf("La distanza e' uguale a: %d\n", d);
        g++;
    }
}