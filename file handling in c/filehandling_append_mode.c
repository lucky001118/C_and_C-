#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[60]="This string will append in the last in my_text file.";
    printf("The file is runnin here.........\n");
   ptr= fopen("my_text1.txt","a");
   fprintf(ptr,"%s\n",string);
   printf("this is the my file contant : %s \n",string);
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}