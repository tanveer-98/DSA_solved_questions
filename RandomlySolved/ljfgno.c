#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char sar[30];
    int i=0,c=0,j;
    gets(sar);
    j=strlen(sar);
    while(i<j)
    {
        if(sar[i]!=sar[j-1])
        {
            printf("pallindrome\n");
            break;
        }
        i++;
        j--;

    }
    return 0;
}
