#include<stdio.h>
#include<string.h>

 int main(){
  char str[20];
  int i,count=0,l,j;
  printf("Enter the string\n");
  gets(str);

  l=strlen(str);
  char a;

 int arr[128];

 for(i=0;i<128;i++)
 arr[i]=0;

 for(i=0;i<128;i++)
 for(j=0;j<l;j++)
{ if(str[j]==' ')
   continue;
  a='i+1';
  else if (a==str[j])
   arr[i]++;

 }
 for(i=0;i<128;i++)
 {
   if(arr[i]==0)
    continue;
    else
       printf("%d is the frequency of the  %c",arr[i],'i+1');

 }
 return 0;
 }
