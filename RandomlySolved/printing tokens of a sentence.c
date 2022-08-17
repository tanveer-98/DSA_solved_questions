#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char sent[1001];
    gets(sent);
     int i=0;

    while(sent[i]!='\0')
       {
         if (sent[i]==' ')
            {
              printf("\n");
            }
          else
              printf("%c",sent[i]);
        i++;
        }

    return 0;
}
