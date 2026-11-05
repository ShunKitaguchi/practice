#include<stdio.h>
void main(void){
    int n=0,J=1,j=1,w=0,v=101;
    int a[]={75,98,75,64,100,75,81,100,79};
    int b[9];
    printf("配列b ");
    while(j<=9){
        while(n<9){
            if(a[n]<v && w<=a[n]){
                w=a[n];
            }
            n++;
        }
        while(n>0){
            n--;
            if(a[n]==w){
                b[n]=J;
                j++;
            }
        }
        J=j;
        v=w;
        w=0;
    }
    for(int i=0;i<9;i++){
        printf("%d ",b[i]);
    }
}