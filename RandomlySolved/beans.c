#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
scanf("%d",&n);
char *color;
color=(char*)malloc(n*sizeof(char));
for(i=0;i<5;i++)
{
   scanf(" %c",&(color+i));
}

printf("%c",*color);
free(color);
return 0;
}
