#include<stdio.h>
void main()
{
FILE *pointer;
char string[1000];
long int var;
int name,rem;
pointer=fopen("fseek.txt","a+");
fgets( string,1000,pointer);
printf("The file cantent is: %s",string);
var=ftell(pointer);
printf("\n\n\nThe Byte of starting to End is: %d",var);
/* rename function works when the rename file dosen't open.
*/
name=rename("fseekFunction.txt","fseek.txt");
if(name==0)
{
    printf("\n\nName changed Successfully!..");
}
else
printf("\n\n Dosent change file name...");

rem=remove("rename_Function.txt");
/* remove function works when the remove file dosen't open.
*/
if (rem==0)
{
    printf("Deletion Sucess!..");
}
else
printf("\nDeletion dosen't sucess!");
fclose(pointer);

}
/* remove function works when the remove file dosen't open.
*/