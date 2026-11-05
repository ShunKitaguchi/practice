#include<stdio.h>
void main(void){
    int n=5,m=0;
    while(n>0){
        n--;
        while(m<n){
            m++;
            printf(" ");
        }
        m=0;
        printf("*");
        printf("\n");
    }
}