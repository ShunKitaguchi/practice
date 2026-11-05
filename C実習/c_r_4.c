#include<stdio.h>
void main(void){
    int n=0,m=0;
    while(n<5){
        n++;
        while(m<n){
        m++;
        printf("*"); 
        }
        m=0;
        printf("\n");
    }
}