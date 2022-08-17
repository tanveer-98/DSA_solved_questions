#include<stdio.h>
int main()
{
 char A[10];
 int alphaA[26]={0};
 scanf("%s",A);
 int i,j;

        for(i=0;A[i]!='\0';i++)
             for(j=0;j<=25;j++)
                 if(A[i]==97+j)
                    alphaA[j]++;

 printf("%d",alphaA[0]);

 return 0;
}
