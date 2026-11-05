#include<stdio.h>

void main(void)
{
      int a,b,c;
      printf("aに代入する整数を入力してください\n");
      scanf("%d",&a);
      if(a>10){
        b=a;
        printf("b=%d",b);
      }else{
        c=a;
        printf("c=%d",c);
      }
}