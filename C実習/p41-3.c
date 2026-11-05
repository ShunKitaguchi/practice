#include<stdio.h>

void main(void){
    int t,h,m,s;
    printf("tに代入する整数を入力してください\n");
    scanf("%d",&t);
    printf("%d秒=",t);
    h=0,m=0,s=0;
    while(t>=3600){
        t-=3600;
        h++;
    }
    while(t>=60){
        t-=60;
        m++;
    }
    s=t;
    printf("%d時間%d分%d秒",h,m,s);
}