#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr, *gptr;
    int ch;
    
    fptr=fopen("source.txt", "r");
    if(fptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    
    gptr=fopen("dest.txt", "w");
    if(gptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    
    ch=fgetc(fptr);
    
    while(ch!=EOF)
    {
        fputc(ch, gptr);
    }
    
    fclose(fptr);
    fclose(gptr);
    
    return 0;
}

    
    
    
    
