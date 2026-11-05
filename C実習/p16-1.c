#include<stdio.h>

void main(void)
{
    int a,b,s;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    if(a<b){
        s=a;
        printf("s=%d",s);
    }else{
        s=b;
        printf("s=%d",s);
    }
}