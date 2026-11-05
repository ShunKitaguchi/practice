#include<stdio.h>

void main(void)
{
    int a,w;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    w=a%2;
    if(w=0){
        printf("ans=G");
    }else{
        printf("ans=K");
    }
}