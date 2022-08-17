#include<stdio.h>
void function(int *p,int *q);
int main(){
int a=5,b=6;
function(&a,&b);
printf("a=%d, b=%d",a,b);
return 0;
}
 void function(int *p,int *q)
 {
  (*p)++;
  (*q)++;

 }
