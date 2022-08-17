#include<stdio.h>
#include<string.h>
int main(){
char arr[5][10];
int i,j;

printf("enter the strings");
for(i=0;i<5;i++)
scanf("%s",&arr[i]);

char temp[10];

for(i=0;i<5;i++)
    for(j=i+1;j<10;j++)
{
    if(strcmp(arr[i],arr[j])>0)
    {
        strcpy(temp,arr[j]);
        strcpy(arr[j],arr[i]);
        strcpy(arr[i],temp);

    }
}
printf("the sorted strings are\n");
for(i=0;i<5;i++)
    printf("%s  ",arr[i]);

return 0;
}
