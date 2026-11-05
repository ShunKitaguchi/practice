#include<stdio.h>
void main(void){
    int c[]={1,1,1,2,2,2,2,4,5,5,7};
    int t[]={65,55,6,1,36,6,6,86,10,30,20};
    int n=0,sum2=0;
    while(n<=10){
        int sum=0;
        do{
            sum+=t[n];
            n++;
        }while(c[n]==c[n-1]);
        printf("コード%d  %d\n",c[n-1],sum);
        sum2+=sum;
    }
    printf("合計     %d",sum2);
}