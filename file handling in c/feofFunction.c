#include<stdio.h>
void main()
{
    FILE *pointer;
    int value;
    char string[2000];
    pointer=fopen("fseek.txt","a+");
    fgets(string,2000,pointer);
    printf("\nThe file content is: %s",string);
    value=feof(pointer);
    if (value==0)
    {
    printf("\nThe cursur is not in the end of file.");
    }
    else
    printf("\nThe cursul is in the end.");
    printf("\nThe end of file is here and the starting to ending byte value is %d",ftell(pointer));
    rewind(pointer);
    printf("\nThe is stsrting of file in byte value is %d",ftell(pointer));
    
    fclose(pointer);
}