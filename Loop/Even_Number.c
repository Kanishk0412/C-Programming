#include<stdio.h>
int main()
{
    int i;
    printf("Even  Number betwen 1-1000\n");
    for(i=1; i<=1000;  i++)
    if(i%2 == 0)
    {
        printf("%d\t",i);
    }
    return 0;
}