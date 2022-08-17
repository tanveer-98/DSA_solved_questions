#include<stdio.h>
#include<string.h>
int main(){
 int i,j;
 char temp;
 char arr[5][20];
 printf("enter the strings\n");
 for(i=0;i<5;i++)
 gets(arr[i]);
 for(i=0;i<5;i++)
 {
     for(j=1;j<20 && arr[i][j]!='\0';j++)
     { if(arr[i][0]>arr[i][j])
       {
           temp=arr[i][j];
           arr[i][j]=arr[i][0];
           arr[i][0]=temp;
       }

     }
 }

  for(i=0;i<5;i++)
{printf("%s",arr[i]);
printf("\n");
}
 return 0;



}
