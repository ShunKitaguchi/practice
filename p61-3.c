#include<stdio.h>
void main(void){
    int tk,L=0,R=8;
    printf("tkに代入する整数を入力してください\n");
    scanf("%d",&tk);
    int h[9]={1,3,4,5,6,9,10,11,12};
    int  mid=(L+R)/2;
    while(L<=R){
        if(h[mid]==tk){
            printf("あり");
            return;
        }
        if(h[mid]<tk){
            L=mid+1;
        }if(h[mid]>tk){
            R=mid-1;
        }
        mid=(L+R)/2;
    }
    printf("なし");
}