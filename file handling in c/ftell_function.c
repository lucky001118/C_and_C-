#include<stdio.h>
void main()
{
FILE *pointer;
char string[1000];
long int var;
pointer=fopen("fseekFunction.txt","a+");
fgets( string,1000,pointer);
printf("The file cantent is: %s",string);
var=ftell(pointer);
printf("\n\n\nThe Byte of starting to End is: %d",var);
fclose(pointer);

}