#include<stdio.h>
#include<string.h>

int main()
{
char Dec_to_hex[100];
int dec,rem;
scanf("%d",&dec);

for(int i=0;dec>0;++i)
{
  rem=dec%16;
  if(rem>=0||rem<=9)
     Dec_to_hex[i]=rem+48;
  else if(rem>9)
     Dec_to_hex[i]=rem+55;
  dec/=16;
}

strrev(Dec_to_hex);


  printf("the hexadecimal format for the decimal is:\n %s ",Dec_to_hex);

return 0;
}
