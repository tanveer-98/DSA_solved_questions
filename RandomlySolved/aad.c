#include<stdio.h>
int main(){
int i=0,j=0;
char str1[50],str2[20];
printf("enter the string\n");
gets(str1);
gets(str2);
while(str1[i]!='\0')
i++;

while(str2[j]!='\0')
{ str1[i]=str2[j];
   j++;
   i++;
   }
printf("%s",str1);
return 0;


}
