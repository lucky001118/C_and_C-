#include<stdio.h>
void main()
{
    int a,b,i, ans, temp;
    a=0, b=1;
    ans=a+b;
    for(i=1; i<=100; i++)
    {
        printf("%d ",ans);
        a=b;
        b=ans;
        ans=a+b;
    }
}