#include<stdio.h>
void main(void){
    int tbl[27]={5,8,7,1,8,7,0,3,6,9,1,8,4,3,8,0,4,4,6,6,7,9,2,3,7,4,7};
    int tot[9];
    int n=1,sum;
    while(n+1<=26){
        sum=tbl[n-1]+tbl[n]+tbl[n+1];
        tot[(n-1)/3]=sum;
        n+=3;
    }
    printf("配列tot= ");
    for(int i=0;i<9;i++){
        printf("%d ",tot[i]);
    }
}