#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *c,int l,int z)
{
    int i;
    char temp;
 for(i=z;i<(l/2)-1;i++)
  {
temp=*(c+i);
  *(c+i)=*(c+l-i);
  *(c+l-i)=temp;
  }
}
int main(){
int i,l,z=0;
char arr[50];
printf("enter the string");
gets(arr);

l=strlen(arr);
reverse(arr,l,z);
printf("the reverse string is \n");
for(i=0;i<l;i++)
{
printf("%c", arr[i]);
}

for(i=0;i<l;i++)
 if((arr[i]==' ')||(arr[i]=='\0'))
  { reverse(arr,i,z);
    z=i;
    }



printf("the reverse string is \n");
for(i=0;i<l;i++)
{
printf("%c", arr[i]);

}

return 0;

}

