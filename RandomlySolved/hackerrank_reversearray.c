#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

   int temp,*arr1,start,end;
    arr1 = (int*) malloc(num * sizeof(int));
    for (start=0,end=num-1;start<end;++start,--end)
    {
        temp=*arr+start;
        *arr+start=*arr+end;
        *arr+end=temp;

    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
