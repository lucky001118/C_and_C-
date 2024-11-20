#include<stdio.h>
int main()
{
    int i;
    
    char name[7] = {78,97,103,101 ,115 ,104};
    char lucky[6] ={76,117,99,107,121};
    char priya[10]={80, 114, 105, 121, 97, 110, 115, 104, 117};
   for(i=0;i<=6;i++)
   {
printf("%c",name[i]);
   }
   printf("\n");
   for(i=0;i<=6;i++)
   {
printf("%c",lucky[i]);
   }
   printf("\n");
   for(i=0;i<=6;i++)
   {
printf("%c",priya[i]);
   }
   printf("\n");
    printf("Hellow world");
/*
    int lim;
    printf("Enter the limit for array ASCII code: ");
    scanf("%d",&lim);
    char Array[lim];
    for ( i = 0; i <= lim; i++)
    {
        scanf("%c",&Array[i]);
    }

    for ( i = 0; i <=lim; i++)
    {
        printf("%c",Array[i]);
    }
    
    */
    return 0;
}