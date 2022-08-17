#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 int main()
  {
  int i,l;
   FILE *fp;
   char data[200];
   printf("enter the string");
   gets(data);

   fp=fopen("nits.txt","w");

   l=strlen(data);

   for(i=0;i<l;i++)
   fputc(data[i],fp);

   return 0;






  }
