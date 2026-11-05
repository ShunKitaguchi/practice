#include<stdio.h>

void main(void){
    int ans,cnt,zoubun,n;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    ans=0,cnt=1,zoubun=0;
    while(cnt<=n){
          while(zoubun<ans){
            zoubun+=1;
          }
          ans=ans+cnt+zoubun;
          printf("ans=%d\n",ans);
          cnt+=1;
    }
    do{
      printf("fuck");
      ans--;
    }while(ans>=1);
}