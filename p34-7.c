#include<stdio.h>

void main(void){
    int a,b,ans;
    ans=0;
    printf("aに代入する整数を入力してください\n");
    scanf("%d",&a);
    printf("bに代入する整数を入力してください\n");
    scanf("%d",&b);
    if(a>b){
        while(b>0){
            b-=1;
            ans+=a;
            printf("ans=%d\n",ans);
        }
    }else{
        while(a>0){
            a-=1;
            ans+=b;
            printf("ans=%d\n",ans);
        }
    }
    
}