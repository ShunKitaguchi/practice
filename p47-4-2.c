#include<stdio.h>
void main(void){
    int n,sum=0;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    int h[]={25,11,88,65,72,61,43,21,33};
    for(int i=0;i<n-1;i++){
        if(i%2!=0){
            sum+=h[i];
        }
    }
    printf("合計=%d",sum);
}