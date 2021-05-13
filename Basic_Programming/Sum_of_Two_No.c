#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the Numbers:\n");
    //scanf function is used for giving the input value and Here, [%d,%i] used for integer value.
    scanf("%d %d", &a, &b);
    printf("Sum: %d", a+b);
    return 0;
}