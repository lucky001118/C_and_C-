#include <stdio.h>
long factorial(int number);
void main()
{
    int number;
    // this is variable for storing the user enter value
    long fact;
    // the variable is used for storing the answer of the factorial

    printf("Enter the number for konw factorial value: ");
    scanf("%d", &number);

    fact = factorial(number);
    // here is calling the factorial function with argument user enter number

    printf("The factorial of %d! is: %d.", number, fact);
    // it is printing the result of factorial
}

//this will calculate the factorial
long factorial(int number)
{

//this if conddition is applied for foctorial one(1!) and factorial zero (0!)
    if (number == 0 || number == 1)
    {
        return 1;
    }

//when the number will greater then 0 and 2 than it condition will exicute till the value is not equal to 0 
    else
    {
        return (number * factorial(number - 1));
    }
}