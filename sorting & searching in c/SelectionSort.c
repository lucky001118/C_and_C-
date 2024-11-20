#include<stdio.h>
int selectionsort(int arr[20],int limit);
void main()
{
    int arr[20],i,limit;
    printf("This is program for Selection sort.\n");

    // here we are asking abour size of an array
    printf("Enter the limit for array elements: ");
    scanf("%d",&limit);

//scaning the array elemrnt to store in arr[20]
printf("Enter the arraay element from inderx 0 to %d: ",limit-1);
    for ( i = 0; i <limit; i++)
    {
        scanf("%d",&arr[i]);
    }

//   for cofermation printing the array element  
    printf("The array elements are: ");
     for ( i = 0; i <limit; i++)
    {
        printf("%d ",arr[i]);
    }

// calling the selection sort function 
    selectionsort(arr,limit);
}

//defination the selectionsort function
int selectionsort(int arr[20],int limit)
{
int temp,i,j,small;

printf("\n Sorting the array element in assending order....");
for ( i = 0; i <limit-1; i++)
{
    //consider the first index smallest value of array and giving it value to the small veriable 
    small=i;
    for (j = i+1; j <limit; j++)
    {
        //Here we checking is small value is greater than next value 
        if (arr[small]>arr[j])
        {
            small=j;
        }
        if (small!=i)
        {
           temp=arr[small];
           arr[small]=arr[i];
           arr[i]=temp;

        }
        
        
    }
    
}
printf("\n\n");
printf("\nThe sorted array in assending order by using Selection sor is: ");
 for ( i = 0; i <limit; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}