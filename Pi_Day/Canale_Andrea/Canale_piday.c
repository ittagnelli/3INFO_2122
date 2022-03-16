#include<stdio.h>
float pigreco(){
int count=1;
    float pi=0;
    float divisore=1;
    for(int i=0;i<1000;i++){
        if(count%2==0){
            pi=pi-(4/divisore);
        }else{
            pi=pi+(4/divisore);
        }
        count++;
        divisore=divisore+2;
    }
    return pi;
}
int main(){
    printf("Il pigreco è %f", pigreco());
}
