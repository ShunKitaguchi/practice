#include<stdio.h>

void main(void)
{
    int ans,cnt,n;
    ans=0;
    cnt=1;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    while(cnt<=n){
        printf("ans=%d cnt=%d\n",ans,cnt);
        ans+=cnt;
        cnt+=2;
    }
}