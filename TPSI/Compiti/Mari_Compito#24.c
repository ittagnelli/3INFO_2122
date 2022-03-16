#define dim 8
#define DIM 8
#include <stdio.h>

int main()
{
    int num1[dim];
    int num2[DIM];
    int i,j;
   
        for(i=0;i<dim;i++)
        { 
         
            scanf("%d",& num1[i]); 
            
            if(num1==0 || num1==1)
        {
            printf(" OK ");
        }
        else
        {
            printf("Errore\n");
            i--;
        }
        
        }
        for(i=0;i<dim;i++)
        {
            printf("%d", num1[i]);
        }
        
        for(j=0;j<DIM;j++)
        {
            scanf("%d",& num1[i]);
            if(num2==0 || num2==1)
        {
            printf("OK");
        }
        else
        {
            printf("Errore");
            j--;
        }
        
        }
        for(j=0;j<DIM;j++)
        {
            printf("%d", num1[i]);
        }
       
        
    
}




