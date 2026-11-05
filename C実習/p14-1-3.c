#include<stdio.h>

void main(void)
{
    int a,b;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    if(a>15){
        b=a;
        printf("b=%d",b);
    }
}