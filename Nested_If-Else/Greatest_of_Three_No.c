#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Three Numbers\n");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b)
    {
        if(a>c)
        printf("Greatest = %d", a);
        else
        printf("Greatest = %d", c);
    }
    else
    {
        if(b>c)
        printf("Greatest = %d", b);
        else
        printf("Greatest= %d", c);
    }
    return 0;
}