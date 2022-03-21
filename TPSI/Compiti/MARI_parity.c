
#include <stdio.h>
int main()
{
    int u;
    printf("Decidi quanti bit vuoi ");
    scanf("%d",&u);
    int num[u];
    int i,cont=0;
    int parity;
    printf("Che parità vuoi?\n");
    printf("Se vuoi dispari inserisci 1 se è pari inserisci 0 ");
    scanf("%d",&parity);
   
        for(i=0;i<u;i++)
        { 
         
            scanf("%d",& num[i]); 
            
            if(num[i]==0 || num[i]==1)
        {
            
        }
        else
        {
            
            i--;
        }
        
        }
        for(i=0;i<u;i++)
        {
            
             if(num[i]== 1)
{
   cont++;
}
            
        }
        
        printf("\n");



if (cont%2==0 && parity==0) //pari
{
   printf("Il bit di parità è 0"); 
}
else if(cont%2!=0 && parity==0)
{
  printf("Il bit di parità è 1"); 
}
if (cont%2==0 && parity==1) //dispari
{
   printf("Il bit di parità è 1"); 
}
else if(cont%2!=0 && parity==1)
{
  printf("Il bit di parità è 0"); 
}
}

