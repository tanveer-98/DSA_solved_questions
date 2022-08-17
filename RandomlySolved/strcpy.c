#include<stdio.h>
#include<string.h>
int main(){
int j;
char str1[20],str2[30];
printf("enter the string\n");
gets(str1);
strcpy(str2,str1);
printf("%s",str2);
return 0;
}
