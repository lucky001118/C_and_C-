#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *takename();
char *takeitem();
char *replaceword(const char *str,const char *oldword, const char *newword)
{
    char *resultstring;
    int i,count=0;
    int newWordLenght,oldWordLenght;
     
     // calculating the lenght of old and new word
     newWordLenght=strlen(newword);
     oldWordLenght=strlen(oldword);

     // now here we were count the character in old (file) / contant_bill.txt file.
     for(i=0;str[i]!='\0';i++)
          {
            if(strstr(&str[i],oldword)==&str[i])
            {
                count++;

                //jump over this word
                i=i+oldWordLenght-1;
            }

     }

//making a new string to fit in the replCE WORD
resultstring=(char *)malloc(i+count *(newWordLenght-oldWordLenght)+1);
i=0;
while (*str)
{
    
 if (strstr(str,oldword)==str)
 {
    strcpy(&resultstring[i],newword);
    i+=newWordLenght;
    str+=oldWordLenght;

 }
 else
 {
    resultstring[i]=*str;
    i+=1;
    str+=1;
 }
 
}
resultstring[i]='\0';
return resultstring;

}

int main()
{
    FILE *pointer=NULL;
    FILE *pointer2=NULL;
    char str[300];
    char *newstr,*newstr2,*newstr3;
    char *name,*item;
    pointer=fopen("contant_bill.txt","a+");
    pointer2=fopen("main_bill.txt","w+");
    //here the contant_bill's text copys here by fgets function.
    name= takename();
    item=takeitem();
    fgets(str,300,pointer);
    printf("The given bill templete was: %s \n",str);
    newstr=replaceword(str,"{{shop}}","Lucly Electronics");
    newstr=replaceword(newstr,"{{item}}","Laptop");
    newstr=replaceword(newstr,"{{name}}","Srivalli");
    printf("\nThe actual bill hals genrated : %s\n",newstr);


    fprintf(pointer2,"%s",newstr);
   // fprintf(pointer2,"%s",newstr2);
   // fprintf(pointer2,"%s",newstr3);
    fclose(pointer);
    fclose(pointer2);
    return 0;

}
char *takename()
{
    char *name[30];
    printf("\nEnter the your name: ");
    scanf("%s",name);
    printf("your name is: %s",name);
   
    return *name;

}
char *takeitem()
{
    char *item[30];
     printf("\nEnter the item of you want to buy: ");
    scanf("%s",item);
    printf("your perchasig item is: %s\n",item);
    return *item;
}