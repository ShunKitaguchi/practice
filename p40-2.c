#include<stdio.h>

void main(void){
    int a,b,amari;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    while(amari!=0){
        amari=a%b;
        a=b;
        if(amari!=0){
         b=amari;
         printf("gcm=%d\n",b);
        }
    }
}