#include<stdio.h>
void main(void){
    int x,y;
    printf("xに代入する整数を入力してください\n");
    scanf("%d",&x);
    printf("yに代入する整数を入力してください\n");
    scanf("%d",&y);
    int h[]={15,11,88,65,72,61,24};
    int sum=0,avg=0;
    for(int i=x;i<y+1;i++){
        sum+=h[i];
    }
    avg=sum/(y-x+1);
     printf("合計=%d 平均=%d",sum,avg);
}