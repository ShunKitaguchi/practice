#include<stdio.h>

void main(void){
    int a,b,c,cnt,work;
    a=8,b=6,c=5,cnt=0,work=0;
    while(work<=50){
        cnt++;
        work+=a+b-c;
        printf("work=%d cnt=%d\n",work,cnt);
    }
}