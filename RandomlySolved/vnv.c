#include<stdio.h>
int length(char *str)
{ char *j=str;
int l;
 while(*j!='\0')
 j++;
 return j-str;
}
int main(){
int j;
char str[20];
printf("enter the string");
gets(str);
j=length(str);
printf("j=%d",j);
return 0;


}
