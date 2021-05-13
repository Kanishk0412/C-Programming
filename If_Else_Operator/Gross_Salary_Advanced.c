#include<stdio.h>
int  main()
{
    long int bs;
    float hra,da,td,gs;
    printf("Enter the Base Salary:");
    scanf("%ld", &bs);
    if(bs>= 150000)
    {
        hra=.4*bs;
        da=.6*bs;
        td=.15*bs;
    }
    else
    {
        hra=.2*bs;
        da=.375*bs;
        td=.75*bs;
    }
    gs=hra+da+bs-td;
    printf("Gross Salary is =%.3f", gs);  
    return 0;
}