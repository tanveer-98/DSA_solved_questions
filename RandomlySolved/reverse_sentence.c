

#include <stdio.h>
#include <string.h>

void reverse(char* begin, char* end);


void reverseWords(char* s)
{
    char* word_begin = s;
    char* temp = s;


    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(s, temp - 1);
}

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}


int main()
{
    char s[100];
     gets(s);
    char* temp = s;
    reverseWords(s);
    printf("%s", s);
    getchar();
    return 0;
}
