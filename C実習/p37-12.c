#include<stdio.h>

void main(void){
    int takasa,cnt,n;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    takasa=1,cnt=n;
    while(takasa<=n){
        for(int i=1;i<=cnt-1;i++){
            printf(" ");
        }
        cnt-=1;
        for(int i=1;i<=2*takasa-1;i++){
            printf("*");
        }
        printf("\n");
        takasa++;
    }
}