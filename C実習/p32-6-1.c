#include<stdio.h>

void main(void){
    int ans,cnt,zoubun,n;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    ans=0,cnt=1,zoubun=1;
    while(cnt<=n){
        ans+=cnt;
        zoubun++;
        cnt+=zoubun;
        printf("ans=%d\n",ans);
    }
}