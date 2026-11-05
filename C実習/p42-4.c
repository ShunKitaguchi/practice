#include<stdio.h>

void main(void){
    int a,b,syou=0;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    while(a>=b){
        a-=b;
        syou++;
    }
    if(b-a<=a){
        syou++;
    }
    printf("商=%d",syou);
}