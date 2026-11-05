#include<stdio.h>
void main(void){
    int a[]={25,11,34,45,22,41,43,21,33};
    int b[]={25,28,18,36,50,31,44,41,15};
    int c[9];
    int n=0;
    printf("配列c ");
    while(n<9){
        c[n]=a[n]+b[n];
        printf("%d ",c[n]);
        n++;
    }
}