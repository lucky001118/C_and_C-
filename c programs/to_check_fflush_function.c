#include<stdio.h>
void main()
{
char ch1[20],ch2[20];
printf("\n\n");
printf("Enter the first string: ");
scanf("%s",ch1);
fflush(stdin);     //fflush(stdin) is here
printf("Enter the second string: ");
scanf("%s",ch2);
fflush(stdin);   //fflush(stdin) is here
printf("\n\n");
printf("The first string value: %s",ch1);
printf("\nThe second string value: %s",ch2);
}
/* When we enter data by using scanf() function or gets() or any function than it store it in buffer storage when we use small amount of 
user input than it is fine, but when we use bulk amount of data than it is needs to clear the buffer data to store another one.
  To clear buffer storage we use fflush(stdin); function it flushe the unwanted data frome buffer storage, after every scanf() function we
  should use fflush(stdin);
*/