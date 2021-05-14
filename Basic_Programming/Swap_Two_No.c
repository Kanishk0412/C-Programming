#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the Number:");
    scanf("%d",&a);
    printf("\nEnter the Second Number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nFirst Number after Swapping %d",a);
    printf("\nSecond Number after Swapping %d",b);
    return 0;
}