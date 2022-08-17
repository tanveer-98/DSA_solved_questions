#include<stdio.h>
#include<string.h>

int main()
{
    char string[100],rev[100];

    gets(string);

    strcpy(rev,string);
    strrev(rev);
    printf("%s\n",string);
    printf("%s",rev);

    if(strcmp(rev,string)==0)
    printf("YES");
    else
    printf("NO");



    return 0;
}
