#include<stdio.h>
#include<string.h>
int count(char *c1,char c)
 {
  int i,count1=0;
  for(i=0;i<20;i++)
 {
     if(c==*(c1+i))
  {
   count1++;
  }
 }
return count1++;
 }

void replace(char *j,char c,char p )
{
    int i;
    for(i=0;i<20;i++)
        if(c==*(j+i))
    {
        *(j+i)=p;
    }

}

int main(){
 char arr[20];
 int i,result,j;
 char c,p;
 printf("enter the string");
 gets(arr);
 printf("enter the character to be check and to be changed ");
 scanf("%c",&c);
 scanf("%d",&j);

 scanf("%c",&p);


 result=count(arr,c);

 printf("the character was found %d times",result);


 replace(arr,c,p);

 printf("after replacing the string becomes\n");
  j=strlen(arr);
 for(i=0;i<j;i++)
 printf("%c",arr[i]);
 return 0;







 }
