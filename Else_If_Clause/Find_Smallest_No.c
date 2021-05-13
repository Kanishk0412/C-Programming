#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the Number:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b&&a<c&&a<d&&a<e)
    f=a;
    else if(b<c&&b<d&&b<e)
    f=b;
    else if(c<d&&c<e)
    f=c;
    else if(d<e)
    f=d;
    else
    f=e;
    printf("%d",f);
    return 0;
}