#include<stdio.h>

void main(void){
    int n;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    int h[9]={25,11,88,65,72,61,43,21,33};
    int sum=0,avg=0;
    for(int i=0;i<n;i++){
        sum+=h[i];
    }
    avg=sum/n;
    printf("合計=%d 平均=%d",sum,avg);
}