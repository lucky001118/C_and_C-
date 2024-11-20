//this 
#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[40];

    printf("The file is runnin here.........\n");
   ptr= fopen("myfile.txt","w+");
  //fgets(string,10,ptr);
  fputs("this is the value.",ptr);
  //printf("\n %s \n",string);
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}