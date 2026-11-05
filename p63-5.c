#include<stdio.h>
void main(void){
    char code[6][4]={"T01","S04","S06","T07","T09","S01"};
    char *name[6];
    char kcode[9][4]={"S01","S06","S03","S05","T01","T09","T05","S04","T07"};
    char *kname[9]={"設計１","設計２","数学","国語","英語","簿記","社会","概論","C言語"};
    int i=0,j;
    while(i<6){
        for(j=0;j<9;j++){
            if(code[i][0]==kcode[j][0] && code[i][2]==kcode[j][2]){
                name[i]=kname[j];
            }
        }
        i++;
    }
    for(i=0;i<6;i++){
        printf("%s %s\n",code[i],name[i]);
    }
}