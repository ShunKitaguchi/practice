#include<stdio.h>
void main(void)
{
    int a,b;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    if(a>b){
        printf("aが大きい\n");
    }else{
        printf("bが大きい\n");
    }
}