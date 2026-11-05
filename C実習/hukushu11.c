#include<stdio.h>
void main(void){
    int n;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    int high=1;
    while(high<=n){
        for(int i=1;i<=n-high;i++){
            printf(" ");
        }
        for(int i=1;i<=high;i++){
            printf("*");
        }
        high++;
        printf("\n");
    }
}