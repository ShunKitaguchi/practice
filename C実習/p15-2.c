#include<stdio.h>

void main(void)
{
    int a,b,c;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    if(a>b){
        c=a-b;
        printf("ans=%d",c);
    }else{
        c=b-a;
        printf("ans=%d",c);
    }
}