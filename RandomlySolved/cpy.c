#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i;
char *str[5];
char arr[20];
printf("enter the strings");
for(i=0;i<5;i++)
{ gets(arr);

 str[i]=(char *)malloc(strlen(arr)+1);
 strcpy(str[i],arr);
}
for(i=0;i<5;i++)
printf("%s   ",str[i]);
return 0;

}
