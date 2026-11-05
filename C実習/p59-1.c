#include<stdio.h>
void main(void){
    int h[9]={6,3,10,9,1,11,4,12,5};
    int tk;
    int result=-1;
    printf("tkに代入する整数を入力してください\n");
    scanf("%d",&tk);
    for(int i=0;i<9;i++){
        if(h[i]==tk){
            result=1;
        }
    }
    if(result==1){
        printf("あり");
    }if(result==-1){
        printf("なし");
    }
}