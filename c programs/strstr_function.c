#include<stdio.h>
#include<string.h>
//strstr() functin includre in the string.h headerfile
int main()
{
    char s1[40]="i'm lucky manikpuri Lucku luck."; 
    char s2[20]="lucky";
    char *p, *q;
    printf("i'm running.......\n");
  /*  int i,j;
    
    for(i=0;i<10;i++)
    {
        scanf("%c",&s1);
    }

for(i=0;i<10;i++)
    {
        scanf("%c",&s2);
    }
  // for(i=0;i<10;i++)
    //{
   //     printf("%c",s1);
   // }
//printf("\n\n");
  //for(i=0;i<10;i++)
    //{
      //  printf("%c",s2);
   // }

   // printf("\n");
   // printf("%s",s1);
   */
p=strstr(s2,s1);
printf("\nHy,I'm the output of strstr(s2,s1): %s\n\n",p);
q=strstr(s1,s2);
printf("\nHy,I'm the output of strstr(s1,s2): %s\n\n",q);

    printf("I'm fnish the running......\n");
//printf("The taken word is %")

return 0;
}