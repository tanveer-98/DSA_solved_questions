#include<stdio.h>
void print(char* D)
{
    int i=0;
    while(D[i]!='\0')
    {
        printf("%c",D[i]);
        i++;
    }
printf("\n");
}
int main()
{
  char C[]=  "HELLO";
  print(C);

return 0;
}
