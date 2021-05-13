#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=1;
    while(b<=10)
    {
        c=a*b;
        printf("%d*%d=%d\t",a,b,c);
        b++;
    }
}