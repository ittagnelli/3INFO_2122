#include <stdio.h>

void main()

{
   
   int lung , n , C[lung] , cont , i;



   printf("inserire la lunghezza del codice binario ");
   scanf("%d" , &lung);
   
   


   for (int i = 0; i < lung; i++)
   {
       printf("inserire 1 o 0 ");
       scanf("%d" , &n);
       
      
       
       switch (n)
       {
         case 0:

         printf("0",C[i]);
           
           break;
         case 1:
           
          printf("1",C[i]);


          cont++;

           break;

           default: i--;
       }

        } 
           if (cont%2==0)
           {
              
              
              
               printf("\n ");
               printf("pari");
               printf("\t \t \t");
               printf("codice controllo: 0");
               printf("\n ");

               printf("dispari");
               printf("\t \t \t");
               printf("codice controllo: 1");

     }

           else
           {

             
               printf("\n ");
               printf("dispari");
               printf("\n ");
               printf("codice controllo: 0");
               printf("\n ");

               printf("pari");
               printf("\n ");
               printf("codice controllo: 1");
           }


}