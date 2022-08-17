#include<stdio.h>
#include<string.h>

int main()
{
    char string[100],rev[100];
    int lrev;
    scanf("%s",string);

    strcpy(rev,string);


    int start=0;
    int end =strlen(rev)-1;
    char temp;

    while(start<=end)
    {
        temp=rev[start];
        rev[start]=rev[end];
        rev[end]=temp;
        start++;
        end--;

    }
      printf("%s\n",string);
     printf("%s",rev);

    if(strcmp(rev,string)==0)
    printf("YES");
    else
    printf("NO");



    return 0;
}
