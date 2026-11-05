#include<stdio.h>
void main(void){
    int h[]={-5,11,88,-65,-72,61,-4};
    int count=0;
    for(int i=0;i<7;i++){
        if(h[i]>=0){
            count++;
        }
    }
     printf("件数＝%d",count);
}