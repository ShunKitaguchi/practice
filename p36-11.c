#include<stdio.h>

void main(void){
    int takasa,n;
    takasa=1;
    while(takasa<=15){
        n=0;
        while(n<takasa){
            printf("*");
            n+=1;
        }
        printf("\n");
        takasa+=1;
    }
}