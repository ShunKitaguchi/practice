#include<stdio.h>
void main(void){
    int n=5,m=0,l=0,k=0;
    while(n>0){
        k++;
        n--;
        while(m<n){
            m++;
            printf(" ");
        }
        m=0;
        while(l<2*k-1){
            l++;
            printf("*");
        }
        l=0;
        printf("\n");
    }
}