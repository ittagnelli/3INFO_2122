#include <stdio.h>

#include <string.h>
#define l 15

void main()  {
    int m[l], ccp=0, cp[l], ccd=0, cd[l],  s=0, checkdig;
    printf("Inserire il codice fiscale:");
    for(int i=0;i<l;i++)
    {
        scanf("%d", &m[i]);
        s=s+m[i];
        if(i%2==0)
        {
            s++;
            cp[ccp]=m[i];
        }
        else
        {
            
            cd[ccd]=m[i];
        }
    }
    checkdig=s/26;
    printf("Il check digit e': %d", checkdig);
    if(checkdig<0)
    {
            printf("Errore");
    }
            else
            {
                    printf("Il numero vale la lettera:");
            }
    }
