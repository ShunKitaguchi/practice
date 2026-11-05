#include<stdio.h>
void main(void){
    int a[8]={4,9,1,7,7,0,8,4};
    int A[8];
    int n=0;
    while(n<7){
        if(n%2==0){
            A[n]=a[n]*3;
        }else{
            A[n]=a[n];
        }
        n++;
    }
    for(int i=1;i<7;i++){
        A[i]+=A[i-1];
    }
    if(10-(A[6]%10)==a[7]){
        printf("OK");
    }else{
        printf("NG");
    }
}