#include<stdio.h>
void main(void){
    int a[5]={40,22,55,35,10};
    int i=0,k,j,w;
    while(i<=3){
        k=i;
        j=i+1;
        while(j<=4){
            if(a[k]>a[j]){
                k=j;
            }
            j++;
        }
        if(a[i]>a[k]){
            w=a[i];
            a[i]=a[k];
            a[k]=w;
        }
        i++;
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}