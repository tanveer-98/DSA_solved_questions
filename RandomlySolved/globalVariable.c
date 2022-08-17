#include<stdio.h>
int a;
void call()
{
    printf("\n");
    scanf("%d",&a);
    printf("after changing from function.\n");
    printf("%d\n",a);


}
int main()
{
 scanf("%d",&a);
 printf("%d\n",a);
 printf("now in the function.\n");
 call();
 printf("%d",a);
 return 0;
}
