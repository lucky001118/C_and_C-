//this is the program to learn fputs function.
#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    printf("The file is runnin here.........\n");
   ptr= fopen("my_text1.txt","a");
  fputs("\nthis is fputs functions ",ptr);
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}