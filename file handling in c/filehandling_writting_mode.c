#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[60]="this is string that written by me.";
    printf("The file is runnin here.........\n");
   ptr= fopen("my_text1.txt","w");
   fprintf(ptr,"this is the new written contant : %s \n",string);
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}