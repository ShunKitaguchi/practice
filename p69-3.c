#include<stdio.h>
void main(void){
    int a[5]={40,20,50,30,10};
    int i=1,j,w;
    while(i<=4){
        w=a[i];
        j=i-1;
        while(j>=0 && a[j]>w){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=w;
        i++;
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}