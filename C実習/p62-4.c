#include<stdio.h>
void main(void){
    int i=0;
    char key[4];
    char kcode[9][4]={"S01","S06","S03","S05","T01","T09","T05","S04","T07"};
    char *kname[9]={"設計１","設計２","数学","国語","英語","簿記","社会","概論","C言語"};
    printf("keyに代入する整数を入力してください\n");
    scanf("%s3s",key);
    while(i<9){
        if(kcode[i][0]==key[0] && kcode[i][2]==key[2]){
            printf("%s ",kname[i]);
            return;
        }
        i++;
    }
    printf("%s キーエラー",key);
}