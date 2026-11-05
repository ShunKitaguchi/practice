#include<stdio.h>
void main(void){
    int b[]={88,67,61,55,18,2,-4};
    int count=0;
    for(int i=0;i<7;i++){
        if(b[i]>=0){
            count++;
        }
    }
    printf("件数＝%d",count);
}