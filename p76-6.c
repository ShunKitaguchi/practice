#include<stdio.h>
void main(void){
    int a[]={11,21,22,34,43,45,58,99};
    int b[]={12,18,21,28,29,38,44,45,99};
    int m=0,n=0;
    while(a[m]<=99 && b[n]<=99){
        int c[m+n+1];
        if(a[m]<=b[n]){
            c[m+n]=a[m];
            m++;
        }else{
            c[m+n]=b[n];
            n++;
        }
        printf("%d ",c[m+n-1]);
    }
}