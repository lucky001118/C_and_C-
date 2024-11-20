#include<stdio.h>
void main()
{
    int a,b,c,count;
    printf("Hy i am running.\n");

    for(a=1;a<=100;a++)
    {
        count=0;
        for(b=2;b<=a/2;b++)
        {
            if(a%b==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && a!=1)
        {
            printf("%d\n ",a);
        }
    }
}