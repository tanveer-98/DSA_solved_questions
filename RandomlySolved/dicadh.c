#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char temp[20];
 char str[5][33];
 printf("enter.....");
 for(i=0;i<5;i++)
   scanf("%s[^\n]",str[i]);

for(i=0;i<4;i++)
{ for(j=i+1;j<5;j++)
  if(strcmp(str[i],str[j])>0)
    {
    strcpy(temp,str[i]);
    strcpy(str[i],str[j]);
    strcpy(str[j],temp);

   }
}
for(i=0;i<5;i++)
printf("%s\n",str[i]);
return 0;}


