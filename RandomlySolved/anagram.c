
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[10001],b[10001];

    int t;
    scanf("%d",&t);

    while(t--)
    {
        int alphaA[26]={0},alphaB[26]={0},T_DELETIONS=0,i,j;
        char A[10001],B[10001];

        scanf("%s",A);
        scanf("%s",B);
        strlwr(A);
        strlwr(B);

        for(i=0;A[i]!='\0';i++)
             for(j=0;j<=25;j++)
                 if(A[i]==97+j)
                    alphaA[j]++;


        for(i=0;B[i]!='\0';i++)
             for(j=0;j<=25;j++)
                 if(B[i]==97+j)
                    alphaB[j]++;


       for(i=0;i<=25;i++)
            {
                int d=abs(alphaA[i]-alphaB[i]);
                T_DELETIONS+=d;

            }
         printf("%d",T_DELETIONS);
    }


    return 0;
}
