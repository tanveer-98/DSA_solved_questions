#include<stdio.h>
#include<string.h>

int main()
{
int i=0,j=0,flag=0;
int l1,l2;
char arr[10],arr2[20];
gets(arr);
gets(arr2);
l1=strlen(arr);
l2=strlen(arr2);
if(l1!=l2)
    {
       printf("not equal");
       return 0;
    }
else
    {
      while(arr[i]!='\0')
        {
            if(arr[i]!=arr2[j])
                {
                   flag=1;
                   break;
                }
            i++;
            j++;
        }
    }


if(flag==0)
    printf("the strings are equal");
else
    printf("the strings are not equal");
return 0;
}
