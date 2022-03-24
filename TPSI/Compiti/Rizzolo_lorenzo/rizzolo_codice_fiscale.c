#include <stdio.h>
#include <string.h>

int main(){

    char parola[16];
    int somma = 0;
    char let_p[36] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
    int  num_p[36] = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9};
    int  num_d[36] = {  1,  0,  5,  7,  9, 13, 15, 17, 19, 21, 2,   4, 18, 20, 11,  3,  6,  8, 12, 14, 16, 10, 22, 25, 24, 23,  1,  0,  5,  7,  9, 13, 15, 17, 19, 21};
    char pari[36], dis[36];
    scanf("%s",parola);
    if(strlen(parola)!=15){ 
        printf("codice non valido");
        return 0;
    }
    int count_pari=0;
    int count_dis=0;
    for(int i=1 ; i<16 ; i++){
        if(i%2==0){
            pari[count_pari]=parola[i-1];
            count_pari++;
        }else{
            dis[count_dis]=parola[i-1];
            count_dis++;
        }
    }
    for(int i=0 ; i<count_pari ; i++){
        for(int j=0 ; j<36 ; j++){
            if(pari[i]==let_p[j]){
                somma=somma+num_p[j];
            }
        }
    }
    printf("\n");
    for(int i=0 ; i<count_dis ; i++){
        for(int j=0 ; j<36 ; j++){
            if(dis[i]==let_p[j]){
                somma=somma+num_d[j];
            }
        }
    }
    int num_controllo = somma%26;
    printf("la lettera di controllo per %s ", parola);
    printf("e' %c\n", let_p[num_controllo]);
    printf("codice fiscale: %s%c",parola, let_p[num_controllo]);
    return 0;
}