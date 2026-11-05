#include<stdio.h>
void main(void){
    int a[5]={40,22,55,35,10};
    int i=4,w;
    while(i>=1){
        int k=i-1;
        while(k>=0){
            if(a[k]>a[i]){
                w=a[i];
                a[i]=a[k];
                a[k]=w;
            }
            k--;
        }
        i--;
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}