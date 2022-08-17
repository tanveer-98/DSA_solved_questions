#include<stdio.h>
int main(){
int a=5;
int* p=&a;
char b='x';
char* c=&b;
float m=3.4;
float *z=&m;
printf("the size of a is %d",sizeof(*p));
printf("the size of character is %d",sizeof(*c));
printf("the size of floating point is %d ",sizeof(*z));
return 0;


}
