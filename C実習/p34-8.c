#include<stdio.h>

void main(void){
    int a,b,syou,amari;
    syou=0,amari=0;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    while(a>=b){
        a-=b;
        syou+=1;
    }
    amari=a;
    printf("syou=%d amari=%d\n",syou,amari);
}