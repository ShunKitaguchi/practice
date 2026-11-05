#include<stdio.h>
void main(void){
    char code[6][4]={"005","004","006","007","010","009"};
    char *name[6];
    char kcode[9][4]={"001","002","003","004","005","006","007","008","009"};
    char *kname[9]={"設計１","設計２","数学","国語","英語","簿記","社会","概論","C言語"};
    int i=0,j;
    while(i<6){
        if(code[i][1]!=kcode[i][1]){
            name[i]="該当なし";
            i++;
        }
        for(j=0;j<9;j++){
            if(code[i][2]==kcode[j][2]){
                name[i]=kname[j];
            }
        }
        i++;
    }
    for(i=0;i<6;i++){
        printf("%s %s\n",code[i],name[i]);
    }
}