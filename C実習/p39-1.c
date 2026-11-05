#include<stdio.h>

void main(void){
    int a,n,kosuu;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    n=0,kosuu=0;
    while(n<=a){
        n++;
        if(a%n==0){
            kosuu++;
        }
    }
     printf("kosuu=%d\n",kosuu);
}