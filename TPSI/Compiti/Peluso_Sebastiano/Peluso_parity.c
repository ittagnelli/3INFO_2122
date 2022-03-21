/**/

#include<stdio.h>
#include<string.h>
#define N 1000

int main(int argc, char *argv[])
{
    char *numero = argv[2];
    char *parita = argv[1];

    int i=0;

    int cont = 0;


     

     while (numero[i] != '\0')
     {

          

          if (numero[i]=='1')
          {
               cont++;
          }
          

          i++;
     }





     
     if (cont%2 == 0)
     {
          if (strcmp(parita, "P") == 0)
          {
               printf("\nil bit di parita' pari e 0 ");
          }
          else 
          {
               printf("il bit di parita' dispari e 1");
          }
     }




     if (cont%2 == 1)
     {
          if (strcmp(parita, "P") == 0)
          {
               printf("\nil bit di parita' pari e 1");
          }
          else
          {
               printf("il bit di parita' dispari e 0");
          }
     }
     

    





    
}