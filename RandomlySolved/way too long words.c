#include<stdio.h>
#include<string.h>
 void stringDELETION(char s[][101],int length,int i)
{
    char temp;
    temp=s[i][length-1];
    s[i][2]='\0';
    s[i][1]=temp;
    printf("%c%d%c\n",s[i][0],length-2,s[i][1]);
}
int main()
{
    int n,i;
    scanf("%d",&n);

    char s[100][101];


    for(i=0;i<n;i++)
        scanf("%s",s[i]);

    for(i=0;i<n;i++)
    {

       if(strlen(s[i])<=10)
            printf("%s\n",s[i]);

       else
       {
           int l=0;
           l=strlen(s[i]);
           stringDELETION(s,l,i);
       }

    }


    return 0;

}
