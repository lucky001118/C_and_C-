#include<stdio.h>
int main()
{ 
   // FILE *pointr;
    int a,b,c,sum,sum2,sum3,i,temp2=0,temp=0;
    //char string[1000];
    //pointr=fopen("abc_2_f.txt","a+");

    
    printf("\n enter the value of a :");
    scanf("%d",&a);
    printf("\n enter the value of b :");
    scanf("%d",&b);
    printf("\n enter the value of c :");
    scanf("%d",&c);
    sum=a+b+c;
    printf(" \n addition is sum=%d \n",sum);
    if(sum>10 && sum<=99)
    {

        printf("The sum is grater than 10. ");
       temp=sum;
        for (i = 0; i < 10; i++)
        {
         
          sum2=temp+10;
        printf("\n The addition of sum is: %d",sum2);
        temp=sum2;
        }
        
    }
    else if (sum<=0)
    {
        printf("The addition is less gthan 0 means it is in negetive.\n");
       temp=sum;
        for ( i = 0; i < 10; i++)
        {
            sum2=temp-10;
            printf("\nThe valu of sum is: %d ",sum2);
            temp=sum2;
        }
        
    }
    else if (sum>=100 && sum<=500)
    {
     printf("The sum is grater than 100. ");
     temp=sum;
        for (i = 0; i < 10; i++)
        {
         
          sum2=temp+100;
        printf("\n The addition of sum is: %d",sum2);
        temp=sum2;
        }
       
    }
    else if (sum>500 && sum<=900)
    {
        printf("\nThe sum is greter than 500 and less than 900\n");
        temp=sum;
        for (i = 0; i < 10; i++)
        {
         
          sum2=temp+500;
        printf("\n The addition of sum is: %d",sum2);
        temp=sum2;
        }
    }
    else
    {
        
        printf("\nThe sum is greter than 500\n");
        temp=sum;
        for (i = 0; i < 10; i++)
        {
         
          sum2=temp+1000;
        printf("\n The addition of sum is: %d",sum2);
        temp=sum2;
        }
        printf("\nLast value of sum2 is: %d",temp);
        if(temp>2000)
        {
            temp2=sum2;
            for ( i = 0; i < 20; i++)
        {
            sum3=temp2-1100;
            printf("\n The subtraction between %d-1100 is: %d",temp2,sum3);
            temp2=sum3;
            //string[1000]=temp2;
           // fprintf("The result is: %s",string);
        }
        
        }
    }

  //  fclose(pointr);
    return 0;
}