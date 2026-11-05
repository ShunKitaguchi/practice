#include<stdio.h>
void main(void){
    int h[]={15,11,88,65,72,61,24};
    int sum=0,avg=0;
    for(int i=4;i<7;i++){
        sum+=h[i];
    }
    avg=sum/3;
     printf("合計=%d 平均=%d",sum,avg);
}