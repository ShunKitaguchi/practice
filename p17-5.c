#include<stdio.h>

void main(void)
{
    int a,b,l,s;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    if(a>b){
        l=a,s=b;
    }else{
        l=b,s=a;
    }
    printf("l=%d s=%d",l,s);
}