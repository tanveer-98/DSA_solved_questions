#include<stdio.h>
#include<math.h>
float area(int a,int b,int c,int s)
{
   float area=sqrt(s*(s-a)*(s-b)*(s-c));
   return area;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s=(a+b+c)/2;
     printf("the area of the triangle is %0.1f",area(a,b,c,s));


    return 0;

}
