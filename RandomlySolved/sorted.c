#include<stdio.h>
int main()
{
int i,j,k,temp;
int arr[]={2,9,33,65,13};
for(i=1;i<5;i++)
{
  k=arr[i];
 for(j=i-1;j>=0;j--)
 {if(k<arr[j])
  arr[j+1]=arr[j];
 }
arr[j+1]=k;
 }




for(i=0;i<5;i++)
printf("%d  ",arr[i]);

return 0;
}
