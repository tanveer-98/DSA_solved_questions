#include<stdio.h>
void reverse(int arr[],int length)
{
   int start=0,end=length-1;
   int temp;
   while(start<=end)
   {
     temp=arr[start];
     arr[start]=arr[end];
     arr[end]=temp;
      start++;
      end--;
   }


}

int main()
{

  int a[]={1,2,3},i;
  printf("the initial array is\n");
  for(i=0;i<3;i++)
  {
     printf("%d,",a[i]);
  }
  printf("\n");
  reverse(a,3);
   printf("\n");
  printf("the reversed array is\n");
  for(i=0;i<3;i++)
  {
     printf("%d,",a[i]);
  }

  return 0;
}
