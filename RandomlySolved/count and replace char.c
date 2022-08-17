#include<stdio.h>
#include<stdlib.h>

int check(char *str,char c)
 {
   int i=0,count=0;
   while(*(str+i)!='\0')
   {
     if(*(str+i)==c)
     count++;

     i++;

   }
return count;

 }

void replace(char *str,char c,char a)
{

int i=0;
   while(*(str+i)!='\0')
   {
     if(*(str+i)==c)
      *(str+i)=a;
     i++;
   }
}



int main(){
int i,j;
char str[30],a,c;
printf("enter the string");
gets(str);
a='d',c='a';

j=check(str,c);
replace(str,c,a);

printf("the character is %c times",j);

printf("After replacing the string becomes\n");
i=0;
while(str[i]<='\0')
{
  printf("%c",str[i]);
  i++;

}



}
