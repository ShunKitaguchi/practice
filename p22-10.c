#include<stdio.h>

void main (void)
{
    int ten;
    char hyo;
    printf("点数を入力してください\n");
    scanf("%d",&ten);
    if(ten>=80){
        hyo='A';
    }else{
        if(ten>=70){
            hyo='B';
        }else{
            if(ten>=60){
                hyo='C';
            }else{
                hyo='D';
            }
        }
    }
    printf("評価=%c",hyo);
}