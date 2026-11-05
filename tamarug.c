#include<stdio.h>
int main(void){
    char name[] = "た○ごっち"; /* 名前 */
    int maxhp = 10, hp = 10; /* 最大体力, 体力 */
    int brain = 0; /* 知力 */
    int power = 0; /* 筋力 */
    int maxhunger = 100, hunger = 100; /* 最大空腹値,空腹値 */
    int day = 1; /* 経過日数 */
    int cmd = 0; /* 選択されたメニュー番号 */
    printf("キャラクター名を入力してください\n");
    scanf("%s", name);
    while (hp > 0){
        /* メニューを表示する */
        printf("--- %d 日目 %s の行動メニュー\n", day, name);
        printf("体力:%d/%d 空腹値:%d/%d 知力:%d 筋力:%d\n", hp, maxhp, hunger, maxhunger, brain, power);
        printf("[1]運動 [2]勉強 [3]睡眠 [4]食事 [9]終了\n");
        printf("番号を入力してください:");
        scanf("%s", &cmd);
        switch (cmd){
            case 1: /* 運動 */
                printf("*** 運動しました ***\n");
                hp-=2;
                power+=1;
                break;
            case 2: /* 勉強 */
                printf("*** 勉強しました ***\n");
                hp-=2;
                brain+=1;
                break;
            case 3: /* 睡眠 */
                printf("*** 睡眠しました ***\n");
                hp=maxhp;
                break;
            case 4: /* 食事 */
                printf("*** 食事しました ***\n");
                hunger+=30;
                break;
            default:
                printf("その番号はメニューにありません。\n");
                day-=1;
                hunger+=20;
        }
        hunger-=20;
        day+=1; /* コマンド 1 回につき 1 日増える */
        printf("\n"); /* 空白行を作り、翌日との区切りに使う */
    }
    if (hp <= 0){
        printf("%s は%d 日目に力尽きた。\n\n", name, day);
    }
    return 0;
}