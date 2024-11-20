#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[40];
    printf("The file is runnin here.........\n");
   ptr= fopen("my_text1.txt","r");
   fscanf(ptr,"%s",string);
   printf("this is the my file contant : %s \n",string);
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}