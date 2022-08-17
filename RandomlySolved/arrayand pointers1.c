#include<stdio.h>
int main()
{
int A[]={2,4,5,8,1};
printf("%d\n",A);
printf("%d\n",&A[0]);
printf("%d\n",&A[1]);
printf("%d\n",A[0]);
printf("%d\n",*A);
printf("%d",*A[1]);
return 0;
}
