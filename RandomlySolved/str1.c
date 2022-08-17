#include<stdio.h>
#include<string.h>
int main(){
char str[10];
int i,j;
printf("enter the string\n");
gets(str);
j=strlen(str);
printf("j=%d",j);
for(i=0;i<=j+1;i++)
printf("%c",str[i]);
return 0;

}
