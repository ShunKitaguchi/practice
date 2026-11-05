#include<stdio.h>
void main(void){
    int a[]={100,100,98,81,79,75,75,75,64};
    int b[9];
    int n=0;
    printf("配列b ");
    while(n<9){
        b[n]=n+1;
        if(a[n]==a[n-1]){
            b[n]=b[n-1];
        }
        n++;
    printf("%d ",b[n-1]);
    }
}