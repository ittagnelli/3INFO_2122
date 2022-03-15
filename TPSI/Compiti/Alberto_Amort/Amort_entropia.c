#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define lunghezza 20
int calcolo_entropia (float num_simboli, float occur) ;
float calcolo_frequenza(float num_simboli, float occur) ;


struct {   
    float Pi; 
    float I; 
    float H;  
  
} simbolo1;

int main() {
    char parola[lunghezza + 1];
    printf("Inserisci una parola");
    scanf("%20s", parola);

    float num_simboli = strlen(parola);
    float H;

    for (int i=0; parola[i]!='\0'; i++ )
    {
        int cont=0; 
        float occur=0;    
        for (int z=i; z>=0; z--)
        {
            if(parola[i]==parola[z])
            {
                cont++;
            }
        }
        
        if (cont<=1)
        {
            for (int j=i; parola[j]!='\0'; j++)
            {
                if(parola[i]==parola[j])
                {
                    occur++;
                
                }
            }
            
            H=calcolo_entropia(num_simboli, occur);
        }

        
}
printf("H(%s)=%f bit/s", parola, H);
}

int calcolo_entropia (float num_simboli, float occur) 
{ float I;
    I=calcolo_frequenza(num_simboli, occur);
    simbolo1.H+=I; 
    printf("H :%f bit/s \n", simbolo1.H);   
    return simbolo1.H;
}

float calcolo_frequenza(float num_simboli, float occur) 
{
    simbolo1.Pi=occur/ num_simboli;
    simbolo1.I=-(log10(simbolo1.Pi)/log10(2));
    printf(" %.3f\n", simbolo1.I);
    return simbolo1.I;

}

