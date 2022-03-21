#include <stdio.h>
#include <string.h>
int  main()
{
    int n, parita;
    printf("Inserire il numero di bit:\n ");
    scanf("%d",&n);
    int vett[n],j=0;
    printf("Inserire numeri 0 o 1:\n ");
    for(int i=0;i<n;i++)
    {
        if(j==0)
        {
            scanf("%d",&vett[i]);
          j++;
            if(vett[i]!=0 && vett[i]!=1)
            {
                
                printf("Il numero non e' valido");
            }
            
         printf("Inserisci P per parita' positiva o D per parita' negativa:\n");
        scanf("%d", & parita);
       
        }
       
   
    }
    return 0;
}
