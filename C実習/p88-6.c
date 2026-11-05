#include<stdio.h>
void main(void){
    int h[9][9];
    int i=0,j=0;
    while(i<9){
        while(j<9){
            h[i][j]=(i+1)*(j+1);
            j++;
        }
        j=0;
        i++;
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(i<=j){
            printf("%d ",h[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}