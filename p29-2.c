#include<stdio.h>

void main(void)
{
    int ans,cnt,n;
    ans=0;
    cnt=1;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    while(cnt<=2*n-1){
        printf("ans=%d cnt=%d\n",ans,cnt);
        if(cnt%2==1){
            ans+=cnt;
        }
        cnt++;
    }
}