#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,n2,i;

    printf("enter the size.\n");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    printf("enter the elements.\n");

    for(i=0;i<n;i++)
        scanf("%d",ptr+i);

    printf("enter the new size.\n");

    scanf("%d",&n2);

    ptr=(int*)realloc(ptr,n2*sizeof(int));

    printf("enter the new elements.\n");

    for(i=n;i<n2;i++)
        scanf("%d",ptr+i);

    printf("the final elements are.\n");

    for(i=0;i<n2;i++)

    printf("%d",*(ptr+i));

    free(ptr);





    return 0;
}
