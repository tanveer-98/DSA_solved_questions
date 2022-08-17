#include<stdio.h>
int main()
{
int arr1[4]={1,2,3,4};
for(int i=0;i<4;++i)
   {
      for(int j=1;j<11;++j)
         printf("%d\t",arr1[i]*j);
      printf("\n");
   }

return 0;
}
