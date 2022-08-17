#include<stdio.h>
#include<string.h>
int main(){
int i=0;
char str1[20],str2[30];
printf("enter the string\n");
gets(str1);
while(str1[i]!='\0')
{ str2[i]=str1[i];
  i++;
}

  printf("%s",str2);
return 0;
}
