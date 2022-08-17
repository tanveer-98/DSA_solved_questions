#include<stdio.h>
#include<string.h>

 int main(){
  char str[20];
  int i,count=0,l,j;
  printf("Enter the string\n");
  gets(str);

  l=strlen(str);
  char a;
  for(i=0;i<l;i++)
   {
       if(str[i]==' ')
       continue;

      count=0;
      a=str[i];
      for(j=0;j<l;j++)
    {  if(a==str[j])
        count++;

       }
  printf("the frequency of %c is %d\n",a,count);

  }
  return 0;
  }
