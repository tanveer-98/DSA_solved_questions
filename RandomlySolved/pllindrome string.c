#include<stdio.h>
#include<string.h>
int main(){
 char arr[20];
 printf("enter the string");
 gets(arr);
 char temp;
  int i,length,count=0;
length=strlen(arr)-1;
for(i=0;i<length;i++)
 {
 if(arr[i]!=arr[length-i])
   count++;

  }
if(count>0)
printf("the string is not pallindrome");

else printf("the string is pallindrome");
return 0;
}
