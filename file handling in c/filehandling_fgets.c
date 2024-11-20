#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[40];
    printf("The file is runnin here.........\n");
   ptr= fopen("my_text1.txt","r");
   fgets(string,100,ptr);
   //fgets() gets the string from the given file. here we can see that fgets taking the 3 parameter the 1st parameter takes the string to store the
   //file containt that is string we want.  2nd is value is string lenght 3rd is the file pointer which is you created to opne file.
   printf("this is the my file contant : %s \n",string);
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}