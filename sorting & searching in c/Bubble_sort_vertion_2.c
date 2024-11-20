#include<stdio.h>
int bubbleSort(int arr[10], int limit);
void main()
{
     int arr[10],limit,i;
    printf("This is the Bubble Sort program\n");
    printf("Enter the limit of array: ");
    scanf("%d",&limit);
    //now storing array element in array by given limits
    printf("\nEnter the array element from indexn 0 to %d:",limit-1);
    for(i=0;i<limit;i++)
    {
     scanf("%d",&arr[i]);

    }   
    // displaying the array elements
    printf("\n The array element from index 0 to %d: ",limit-1);
    for(i=0;i<limit;i++)
    {
     printf("%d ",arr[i]);

    }   
   bubbleSort(arr,limit);   //calling the bubble_sort function
   
    }   
   
int bubbleSort(int arr[10],int limit)
{
    int i,j,temp,casee;
    int second;
    printf("\n1. Assending Order \n2. Dessending Order \nChose order of sorting an array: ");
    scanf("%d",&casee);
    switch (casee)

    {
    case 1:
    //calculating bubble sortin in Assending order
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }  //end of if statement
        }  //end of j for loop  
    }  //end of i for loop
    break;
    case 2:
    //calculating bubble sortin in dessending order
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }  //end of if statement
        }  //end of j for loop  
    }  //end of i for loop

    } // end of case statement
    printf("\n\n");
    printf("Sorting.............\n");
    printf("The sorted array is: ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("\nDo you want to sort another one array");
    printf("\nEnter '1' for yes: ");
    scanf("%d",&second);
    printf("\n\n");
    if(second==1)
    {
        main();
    }
    return 0;
}