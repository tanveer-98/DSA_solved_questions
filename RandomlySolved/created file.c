#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("soumya.txt","w");
char open[90];
if(ptr==NULL)
printf("file is not created");

else{
printf("enter the string \n");

gets(open);
fputc(open,ptr);

}
fclose(ptr);

return 0;

}
