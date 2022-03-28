#include <stdio.h>
#include <string.h>

int main() 
{
  char vect[20];
  char pd;
  int cont=0;
  printf("Scrivere P o D: ");
  scanf("%c", &pd);
  printf("Inserire sequenza di numeri 0 e 1: ");
  scanf("%s", vect);
  int l=strlen(vect);
    for(int j=0; j<l; j++)
        {
          /* if(vect[j]=='1')
          {
            cont+=1;
          }
            printf("%d", cont);
          */

            int e = vect[j]-48;
            cont=e+cont;
        }
        if(cont%2==0)
        {
            if(pd=='P')
            {
                printf("bit di parita' = 1");
            }
            else
            {
                printf("bit di parita' = 0");
            }

        }

        if(cont%2!=0)
        {
            if(pd=='P')
            {
                printf("bit di parita' = 0");
            }
            else
            {
                printf("bit di parita' = 1");
            }
            
        }
}