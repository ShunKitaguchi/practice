#include<stdio.h>

void main(void){
    int ans,sw,t,k,n;
    ans=0,sw=1,t=1,k=1;
    printf("nに代入する整数を入力してください\n");
    scanf("%d",&n);
    while(k<=n){
        t*=k;
        if(sw==1){
            ans+=t;
            sw=2;
        }else{
            sw=1;
        }
        k+=1;
        printf("ans=%d sw=%d t=%d k=%d\n",ans,sw,t,k);
    }
}