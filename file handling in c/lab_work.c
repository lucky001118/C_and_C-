#include<stdio.h>
void main()
{
    FILE *pointer=NULL;
    FILE *pointer2=NULL;

    char str[1000];
    char *holdchar;
    pointer=fopen("lab_wo.txt","a+");
    pointer2=fopen("lab_wo2.txt","w");
fgets(str,1000,pointer);
printf("\n%s\n",str);
fprintf(pointer2,"%S",holdchar);
printf("the content of in lab_wo2.txt is: %s ",str);


    fclose(pointer);
    fclose(pointer2);
}