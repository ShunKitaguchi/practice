#include<stdio.h>
void main(void){
    int a[9]={25,11,34,45,22,41,43,21,33};
    int b[9];
    int n=0;
    printf("配列b ");
    while(n<9){
        b[n]=a[n];
        printf("%d ",b[n]);
        n++;
    }
}