#include <stdio.h>
#include <string.h>
#define d 30

void stampa(char num[d],int l){
    for(int i=0 ; i<l ; i++){
            int n=num[i]-48;
            printf("%d",n);
        }
}

void main(){
    char numero[d], par;
    int somma=0;
    int parity_bit=0,disparity_bit=0;

    printf("inserisci P per parita' positiva o D per parita' negativa: "); 
    scanf("%c", &par);
    printf("Inserisci parola binaria: "); scanf("%s", numero);
    int l=strlen(numero);
    for(int i=0 ; i<l ; i++){
        int n=numero[i]-48;
        somma=somma+n;
    }
    if(somma%2==0){
        parity_bit=0;
        disparity_bit=1;
        printf("Il bit di parita' per ");
        stampa(numero,l);
        printf(" e' ");
        if(par=='d' || par=='D'){
            printf("%d\n", disparity_bit);
            stampa(numero,l);
            printf("%d", disparity_bit);
        }else{
            printf("%d\n", parity_bit);
            stampa(numero,l);
            printf("%d", parity_bit);
        }
    }else{
        parity_bit=1;
        disparity_bit=0;
        printf("Il bit di parita' per ");
        stampa(numero,l);
        printf(" e' ");
        if(par=='d' || par=='D'){
            printf("%d\n", disparity_bit);
            stampa(numero,l);
            printf("%d", disparity_bit);
        }else{
            printf("%d\n", parity_bit);
            stampa(numero,l);
            printf("%d", parity_bit);
        }
    }

    
}