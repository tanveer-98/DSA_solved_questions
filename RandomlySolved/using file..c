#include<stdio.h>
#include<stdlib.h>
int main()
{

FILE *fptr;

int ch;

if((fptr=fopen("myfile","w"))==NULL)
{
    printf("error in opening file");
    exit(1);
}
printf("enter text:\n");

while(ch=getchar()!=EOF)
    fputc(ch,fptr);

fclose(fptr);

return 0;
}
