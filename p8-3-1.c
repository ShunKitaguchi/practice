#include<stdio.h>

void main(void)
{
    int a=1;
    int b=2;
    int c=3;
    int w;
    w=a;
    a=b;
    b=w;
    w=c;
    c=b;
    b=w;
    printf("a=%d b=%d c=%d w=%d",a,b,c,w);
}
