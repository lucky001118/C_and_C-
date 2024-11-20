#include<stdio.h>
#include<stdlib.h>
#define NAME_SIZE 30;
void main()
{
    FILE *pointer;
    char name[30];
    int i,n;
    char ch,ans='y';
    pointer=fopen("name.txt","a+");
    if(pointer==NULL)
    {
        printf("file name.txt can not be opened \n");
        exit(0);
    }
    while(ans=='y' || ans=='Y')
    {
        printf("Enter your name: ");
        scanf("%s",&name);
        fprintf(pointer,"%s\n",name);
        fflush(stdin);
        printf("\n Do you want to add one more...[Y/N]\n");
        scanf("%c",&ans);
    }
    rewind(pointer);
    fflush(stdin);
    printf("\nEnter the first character of name to be searched: ");
    scanf("%c",&ch);
    while (fscanf(pointer,"%s\n",name)!=EOF)
    {
        if(name[0]!=ch)
        continue;
        if(name[0]==ch)
        printf("\nNames starting with %c = %s\n",ch,name);
        else
        break;
    }
    fclose(pointer);
}