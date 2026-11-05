#include<stdio.h>

void main(void){
    int h[9]={25,11,88,65,72,61,43,21,33};
    int sum=0;
    for(int i=0;i<9;i++){
        sum+=h[i];
        printf("合計%d\n",sum);
    }
}