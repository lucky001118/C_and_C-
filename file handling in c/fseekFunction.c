#include<stdio.h>
void main()
{
FILE *pointer;
char string[1200];
long int var;
pointer=fopen("fseek.txt","a+");
fgets( string,1160,pointer);
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

fseek(pointer,0,SEEK_END);
printf("\nThe curtel is: %d after apply fseek() function.",ftell(pointer));
fseek(pointer,0,SEEK_SET);
printf("\nAgain the curtial is: %d after applying the fseek() function.",ftell(pointer));
fclose(pointer);
}