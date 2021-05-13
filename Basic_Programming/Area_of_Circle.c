#include<stdio.h>
#include<conio.h>
int main()
{
    float radius, area;
    printf("Enter the Radius:\n");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    printf("\nArea of the Circle: %.2f", area);
    return 0;
}