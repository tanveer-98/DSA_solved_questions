#include<stdio.h>
#include<math.h>
int main()
{
long int n;
long double res;
scanf("%d",&n);
res=fmod(pow(1,n)+pow(2,n)+pow(3,n)+pow(4,n),5);
printf("%f",(res));
return 0;
}
