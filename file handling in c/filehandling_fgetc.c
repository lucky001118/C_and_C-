#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char c;
      printf("The file is runnin here.........\n");
   ptr= fopen("my_text1.txt","r");
      c=fgetc(ptr);
   //The fgetc(file pointer ) function is takes character in the given file name.
   printf("this is the my file contant : %c \n",c);
   printf("this is the my file contant : %c \n",c);
printf("this is the my file contant : %c \n",c);

   //Here the %c is printing character frome given file.
   fclose(ptr);
   printf("we are the out side of my file ....");
   return 0;

}