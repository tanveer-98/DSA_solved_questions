#include<stdio.h>
int main()
{
int i,j,k,temp;
int arr[]={2,9,33,65,13};
for(i=0;i<4;i++)
for(j=0;j<5-i;j++)
{
  if(arr[j]<arr[j+1])
   {
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;

   }
}

for(i=0;i<5;i++)
printf("%d  ",arr[i]);

return 0;
}
