#include<stdio.h>
int main()
{
    int bs,news,student;
    float gs,hra,da,td;
    scanf("%d" ,&bs);
    hra=0.15*bs;
    da=.45*bs;
    news=1000;
    student=30000;
    td=.125*bs;
    gs=bs+hra+da+news+student-td;
    printf("%f",gs);
    return 0;
}