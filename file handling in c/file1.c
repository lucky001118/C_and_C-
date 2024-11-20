#include<stdio.h>
int main()
{
 FILE *ptr = NULL;
 char string[34] = "this is an string .";
 ptr=fopen("myfile.txt","r");
 fscanf(ptr,"%s",string);
 printf("the containt of this file has: %s \n ",string);


return 0;
}
