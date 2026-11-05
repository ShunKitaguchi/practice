#include<stdio.h>

void main(void)
{
    int ans,a,n;
    ans=1;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    while(n>=0){
        printf("ans=%d\n",ans);
        ans*=a;
        n--;
    }
}