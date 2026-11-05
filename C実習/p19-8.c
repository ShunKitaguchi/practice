#include<stdio.h>

void main(void)
{
    int a,b,w;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    if(a>b){
        w=a,a=b,b=w;
    }
    printf("a=%d b=%d",a,b);
}