#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    printf("Inserire il numero di bit: \n");
    scanf("%d",&n);
    int vett[n],v=0,l=-1,j=0;
    printf("Inserire una sequenza di 0 e 1 una cifra alla volta: ");
    for(int i=0;i<n;i++)
    {
        if(j==0)
        {
            scanf("%d",&vett[i]);
            l++;
            if(vett[i]!=0 && vett[i]!=1)
            {
                j++;
                printf("il numero inserito non e valido");
            }
            else if(vett[i]==1)
            {
                v++;
            }
        }
    }
    if (j==0)
    {
        if (vett[l]==0)
        {
            if (v/2*2==v)
            {
                printf("La sequenza di numeri e valida");
            }
            else
            {
                printf("La sequenza di numeri non e valida");
            }
        }
        else
        {
            v--;
            if (v/2*2==v)
            {
                printf("La sequenza di numeri non e valida");
            }
            else
            {
                printf("La sequenza di numeri e valida");
            }
        }
    }
}