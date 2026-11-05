#include <stdio.h>
void main(void){
    int num = 200;
    switch (num) {
        case 100:
            printf("100 です\n");
            break;
        case 200:
            printf("200 です\n");
            break;
        case 300:
            printf("300 です\n");
            break;
        default:
            printf("それ以外です");
    }
}