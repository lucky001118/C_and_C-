#include<stdio.h>
void main()
{
    int a,b,c,d,count=0;
    printf("Enter the number you to check;\n");
    scanf("%d",&a);
    printf(" Your enter number is:%d.\n",a);
    for(b=2;b<=a/2;b++)
    {
        if(a%b==0)
        {
            count++;
            break;
        }
        
    }
    if(count>0)
    {
        printf("This number is %d not prime.",a);

    }
else
{
    printf("This number is %d  prime.",a);

}
}