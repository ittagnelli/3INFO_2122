#include <stdio.h>
void main()
{
    int n;
    printf("Inserire il numero di bit da cui e' formata la sequenza:\n");
    scanf("%d",&n);
    int v[n],u=0,l=-1,e=0;
    printf("Inserire una sequenza di 0 e 1 una cifra alla volta: ");
    for(int i=0;i<n;i++)
    {
        if(e==0)
        {
            scanf("%d",&v[i]);
            l++;
            if(v[i]!=0 && v[i]!=1)
            {
                e++;
            }
            else if(v[i]==1)
            {
                u++;
            }
        }
    }
    if (e==0)
    {
        if (v[l]==0)
        {
            if (u/2*2==u)
            {
                printf("La sequenza di numeri e' valida");
            }
            else
            {
                printf("La sequenza di numeri non e' valida");
            }
        }
        else
        {
            u--;
            if (u/2*2==u)
            {
                printf("La sequenza di numeri non e' valida");
            }
            else
            {
                printf("La sequenza di numeri e' valida");
            }
        }
    }
}