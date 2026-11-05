#include<stdio.h>
void main(void){
    int max=0,dai=0;
    int h[]={25,11,88,65,72,61,43,21,33};
     for(int i=0;i<9;i++){
        if(h[i]>max){
            max=h[i];
            dai=i;
        }
     }
     printf("最大値＝%d 要素番号＝%d",max,dai);
}