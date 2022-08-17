#include<stdio.h>
int main()
{
    FILE *new;
    int c,count=0;
    char d;
    printf("enter the characters and press ctrl+z to exit.\n");

    new=fopen("C:\\Users\\Tanveer\\Desktop\\C_filehandling.txt","w");

    while((c=getchar())!=EOF)
        fputc(c,new);

    fclose(new);

    printf("\n");

    new=fopen("C:\\Users\\Tanveer\\Desktop\\C_filehandling.txt","r");

    while((c=fgetc(new))!=EOF)
       {
           printf("%c",(char)c);
           count++;
       }


    fclose(new);
    printf("\n");
    printf("the no of characters in the  file is %d",count);


    return 0;
}
