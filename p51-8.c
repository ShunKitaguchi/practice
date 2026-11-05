#include<stdio.h>
void main(void){
    int c[]={-85,-72,-65,-48,-5,-4,2};
    int sum=0,avg=0,count=0;
    for(int i=0;i<7;i++){
        if(c[i]>=0){
            sum+=c[i];
            count++;
        }
    }
    avg=sum/count;
    printf("合計＝%d,平均＝%d",sum,avg);
}