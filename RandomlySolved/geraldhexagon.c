#include<stdio.h>
#include<math.h>
int main()
{
 int a1, a2, a3, a4, a5, a6,z;
scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);
z=pow(a1+a2+a6, 2)- pow(a2,2) - pow(a4, 2) - pow(a6,2);
printf("%d",z);

return 0;
}
