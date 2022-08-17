#include<stdio.h>
#include<string.h>
int main(){
int i,j;
char arr[5][10];
printf("enter the string\n");
for(i=0;i<5;i++)
gets(arr[i]);
char temp[10];

for(i=0;i<5;i++)
  for(j=i+1;j<=10;j++)
     if(strcmp(arr[i],arr[j]) >0)
     {
       strcpy(temp,arr[i]);
       strcpy(arr[i],arr[j]);
       strcpy(arr[j],temp);

       }




 printf("After sorting\n");
for(i=0;i<5;i++)
 printf("%s  ",arr[i]);
 return 0;
 }
