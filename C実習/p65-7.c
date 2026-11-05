#include<stdio.h>
void main(void){
    int ten[6]={90,100,15,60,70,5,};
    char hantei[6];
    int hten[4]={80,70,60,0};
    char hname[4]={'A','B','C','D'};
    int i=0,j;
    while(i<6){
        for(j=0;j<4;j++){
            if(ten[i]>=hten[j]){
                hantei[i]=hname[j];
                j=4;
            }
        }
        i++;
    }
    for(i=0;i<6;i++){
        printf("%d %c\n",ten[i],hantei[i]);
    }
}