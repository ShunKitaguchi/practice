#include<stdio.h>

void main(void)
{
    char a='Z';
    char b='R';
    char c;
    int d=5;
    int e=8;
    int f;
    b=a;
    c=b;
    f=e;
    e=d;
    printf("a=%c b=%c c=%c d=%d e=%d f=%d",a,b,c,d,e,f);
}