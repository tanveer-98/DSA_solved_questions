#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("C:/Users/Tanveer/Desktop/C_filehandling/a.txt","a");
    if(ptr=NULL)
       {
         printf("the file was not found.\n");
         return 1;
       }

    fputs("i am a very good boy.",ptr);
    fclose(ptr);


    return 0;
}
