#include <stdio.h>
#include <string.h>

void main(){

    char f[30];
    int count=0;

    printf("inserisci simboli-> "); scanf("%s", f);
    int l=strlen(f);
    
    for(int i=0 ; i<l ;i++){
        count=0;
        printf("f=%c\n", f[i]);
        if(f[i]!='a')
            printf("%c | ", f[i]);
        for(int j=0 ; j<l ;j++){
            if(f[i]=f[j] && f[i]!='a'){
                count++;
                f[i]='a';
            }
        }
        
        printf("%d\n", count);
    }
}