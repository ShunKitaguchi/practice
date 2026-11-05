#include <stdio.h>

void main(void)
{
    int ans,n;
    ans=1;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    while(n>=1){
        printf("ans=%d\n",ans);
        ans*=n;
        n--;
    }
}