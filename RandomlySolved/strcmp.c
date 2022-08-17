#include<stdio.h>
#include<string.h>
int main(){
int j;
char str1[20],str2[30];
printf("enter the two string\n");
gets(str1);
gets(str2);
j=strcmp(str1,str2);
if(j==0)
printf("the string are equal");
else if(j==1)
    printf("First string is large");
else if (j==-1)
    printf("Second string is large");

return 0;



}
