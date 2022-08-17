#include<stdio.h>
int digitsum(int n);
int main(){
 int n,j;
 printf("Enter the number ");
 scanf("%d",&n);

return 0;
}
int digitsum(int n)
{  int rem,sum=0;
 if (n==9)
     printf("the number is dvisible by 9");
 else printf("the is not divisible by 9");
while(n!=0)
 { rem=n%10;
  sum+=rem;
  n=n/10;
  }
  if(n==0)
  return sum;
 }


