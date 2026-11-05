#include<stdio.h>
void main(void){
    int h[5][5];
    int i=0,j=0;
    while(i<6){
        while(j<6){
            h[i][j]=0;
            j++;
        }
        j=0;
        i++;
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
        printf("%d ",h[i][j]);
        }
        printf("\n");
    }
}