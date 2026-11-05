#include<stdio.h>

void main(void)
{
    int a=5;
    int b=6;
    int c=7;
    int w;
    w=a;
    a=b;
    b=c;
    c=w;
    printf("a=%d b=%d c=%d w=%d",a,b,c,w);
}