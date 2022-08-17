#include<stdio.h>
int main(){
int a=6;
int *b=&a;
int **c=&b;
printf("%d",**c);
return 0;


}
