
#include <stdio.h>
#include <string.h>

int main()
{
    int len,one=0,two=0,three=0,zero=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    char string[100];
    scanf("%s",&string);

    len=strlen(string);

    int i;
    for(i=0;i<len;++i)
        {
                  if(string[i]==48)
                      zero++;
                  else if(string[i]==49)
                      one++;
                  else if(string[i]==50)
                      two++;
                  else if(string[i]==51)
                      three++;
                  else if(string[i]==52)
                      four++;
                  else if(string[i]==53)
                      five++;
                  else if(string[i]==54)
                      six++;
                  else if(string[i]==55)
                      seven++;
                  else if(string[i]==56)
                      eight++;
                  else if(string[i]==57)
                      nine++;
                     else
                         continue;



       }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
        return 0;
}
