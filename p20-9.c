#include<stdio.h>

void main(void)
{
    int a,b,c,d,w;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    printf("cに代入する整数を入力してください\n");
    scanf("%d",&c);
    printf("dに代入する整数を入力してください\n");
    scanf("%d",&d);
    if(a>b){
        w=a,a=b,b=w;
    }
    if(a>c){
        w=a,a=c,c=w;
    }
    if(a>d){
        w=a,a=d,d=w;
    }
    if(b>c){
        w=b,b=c,c=w;
    }
    if(b>d){
        w=b,b=d,d=w;
    }
    if(c>d){
        w=c,c=d,d=w;
    }
    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
}