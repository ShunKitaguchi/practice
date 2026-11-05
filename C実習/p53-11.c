#include<stdio.h>
void main(void){
    int dai=0,syou=0,sum=0,avg=0;
    int h[]={25,11,88,65,72,61,43,21,33};
    int n=0,max=h[0],min=h[0];
    while(n<9){
        sum+=h[n];
        if(h[n]>max){
            max=h[n];
            dai=n;
        }
        if(h[n]<min){
            min=h[n];
            syou=n;
        } 
        n++;
    }
    avg=sum/n;
    printf("要素番号：%d 最大値：%d 要素番号：%d 最小値：%d 平均：%d",dai,max,syou,min,avg);
}