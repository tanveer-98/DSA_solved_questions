//program to reverse words of a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*void print(char reversed[])
{
    printf("%s",reversed);

}*/

void reverse_words(char sent[])
{
    int i=0,j=0,space_no,space_pos[20];

    while(sent[i]!='\0')
        {
            if(sent[i]==' ')
                {
                    space_no++;
                    space_pos[j]=i;
                    j++;
                }
            i++;
        }
   while(sent[i]!='\0')
     {
     {

         int start=0;
        char temp;
     int end=space_pos[i]-1;

     while(start<=end)
        {
            temp=sent[start];
            sent[start]=sent[end];
            sent[end]=temp;
            start++;
            end--;

        }



    printf("%s",sent);
    //print(sent);

}

void reverse_sentence(char sent[])
{
    strrev(sent);
    reverse_words(sent);
}

int main()
{
    char arr[100];

    gets(arr);


    reverse_sentence(arr);

    return 0;
}
