#include <stdio.h>

#define NBITS  4 
#define NCODES 4 

void print_code(char simbolo) {
    printf("%c",  simbolo);    
    
}


int hamming(int a, int b, int distanza)
{

    if (a!=b)
    {
        distanza++;
    }
    return distanza;
}


void main() {
    int codec[NCODES][NBITS] = 
    {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {0, 1, 0, 1},
    };
    int distanza=0;

    char simboli[NBITS];
    int cont;

    
    do{
        scanf("%s", simboli);
        cont=0;
        for (int i=0; i<=NBITS; i++)
        {
            for(int j=0; j<i; j++)
            {
                if (simboli[i]==simboli[j])
                {
                    cont++;
                }
            }
        } 
    }while(cont!=0);


    for(int i=0; i<NCODES; i++)
    {
        for(int j=i+1; j<NCODES; j++)
        {
            distanza=0;
            for(int z=0; z<=NCODES; z++)
            {
                distanza=hamming(codec[i][z], codec[j][z], distanza);
            }

            printf("La distanza tra ");
            print_code(simboli[i]);
            printf(" e ");
            print_code(simboli[j]);
            printf(" = %d\n", distanza);
        } 
    } 
    
    }
