#include<stdio.h>
int main()
{
    int  x,y,z,p,q,per;
    printf("Enter the marks given in Five Subjects");
    scanf("%d%d%d%d%d",&x,&y,&z,&p,&q);
    per=(x+y+z+p+q)/5;
    if(per>=60)
    printf("First Divison");
    {
        if (per>=50)
        printf("Second Division");
        else
        {
            if(per>=40)
            printf("Third Divison");
            else
            {
                if (per>=30)
                printf("Fourth Divison");
                else 
                printf("Failed");
            }
        }
    }
    return 0;
}