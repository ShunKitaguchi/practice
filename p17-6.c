#include<stdio.h>

void main(void)
{
    int a,b,c,l;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    printf("cに代入する整数を入力してください\n");
    scanf("%d",&c);
    if(a>b){
            if(a>c){
            l=a;
        }else{
            l=c;
        }
    }else{
        if(b>c){
            l=b;
        }else{
            l=c;
        }
    }
    printf("l=%d",l);
}