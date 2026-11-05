#include<stdio.h>
void main(void){
    char c[]={'A','A','A','B','B','B','B','D','F','F','G','X'};
    int t[]={65,55,6,1,36,6,6,86,10,30,20};
    int n=0,sum2=0;
    while(c[n]!='X'){
        int sum=0;
        do{
            sum+=t[n];
            printf("コード%c  %d\n",c[n],t[n]);
            n++;
        }while(c[n]==c[n-1]);
        sum2+=sum;
        printf("小計     %d\n",sum);
    }
    printf("総合計   %d\n",sum2);
}