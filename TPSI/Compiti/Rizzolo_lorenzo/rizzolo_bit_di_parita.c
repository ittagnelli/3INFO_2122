#include <stdio.h>
#define bit 5
main(){
    int num[bit], somma=0,bit_di_parita=0;
    for(int i=0 ; i<bit ; i++){
        printf("inserisci numero-> "); scanf("%d",&num[i]);
        somma=somma+num[i];
    }
    if(somma%2==0){
        bit_di_parita=0;
    }else{
        bit_di_parita=1;
    }
    printf("bit di parita'= %d", bit_di_parita);
    

}