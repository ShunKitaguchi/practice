#include<stdio.h>
void main(void){
    int n=1,m=1;
    while(n<=5){
        n++;
        while(m<=5){
            m++;
            printf("*"); 
        }
        m=1;
        printf("\n");
    }
}