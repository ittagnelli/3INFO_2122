#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define l 5

void main()  {
    int cf[l], ccp=0, cp[l], ccd=0, cd[l], i, s=0, check;
    printf("Inserire codice\n");
    for(i=0;i<l;i++)
    {
        scanf("%d", &cf[i]);
        s=s+cf[i];
        if(i%2==0)
        {
            ccp++;
            cp[ccp]=cf[i];
        }
        else
        {
            ccd++;
            cd[ccd]=cf[i];
        }
    }
    check=s/26;
    printf("Il check digit e': %d", check);
}