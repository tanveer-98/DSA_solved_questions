#include<stdio.h>
#include<string.h>

 int main(){
  char str[20];
  int i,count=0,l;
  printf("Enter the string\n");
  gets(str);

  l=strlen(str);

for(i=0;i<l;i++)
    printf("%c",str[i]);

   for(i=0;i<l;i++)
   {
    if (str[i]==' ')
    continue;

    count++;


   }
 printf("the no. of letters %d\n",count);

  i=0;
  while(str[i]!='\0')
  {
     if (str[i]==' ')
    printf("\n");


    else  printf("%c",str[i]);

  i++;

  }


 }
