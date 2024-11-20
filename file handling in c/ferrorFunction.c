#include<stdio.h>
void main()
{
FILE *pointer;
char string[1100];
long int var;
pointer=fopen("fseek.txt","a+");
fgets( string,1000,pointer);
printf("The file cantent is: %s",string);
var=ftell(pointer);
printf("\n\n\nThe Byte of starting to End is: %d",var);
ferror(pointer);
if (ferror(pointer)==0)
{
printf("\nNo Error detect in file reading.!");
}
else
printf("\nError Ditected in reading mode.");

fclose(pointer);

}