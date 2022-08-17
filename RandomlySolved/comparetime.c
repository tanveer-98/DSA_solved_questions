#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define scan(in)scanf("%d",&in);
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
 int n;
 printf("enter the no of elements\n");
 scan(n)
 if(n<=0)
 {
   printf("invalid input!!\n");
   return 0;
 }
 int *arr1,*arr2,*arr3;
 double timebubble=0,timeinsertion=0,timeselection=0;

arr1=(int*)malloc(n*sizeof(int));

arr2=(int*)malloc(n*sizeof(int));

arr3=(int*)malloc(n*sizeof(int));



for(int i=0;i<n;i++)
{

arr1[i]=rand()%100;
arr2[i]=arr1[i];
arr3[i]=arr1[i];
//printf("%d ",arr1[i]);
}
printf("\n");
clock_t begin1=clock();
//bubble sort

    int i, j;
    for (i = 0; i < n-1; i++)

    for (j = 0; j < n-i-1; j++)
        if (arr1[j] > arr1[j+1])
            swap(&arr1[j], &arr1[j+1]);

//bubble sort ends
clock_t end1=clock();
timebubble+=(double)(end1-begin1)/CLOCKS_PER_SEC;
//insertion sort
clock_t begin2=clock();

 int key;
    for (i = 1; i < n; i++)
    {
        key = arr2[i];
        j = i - 1;

        while (j >= 0 && arr2[j] > key)
        {
            arr2[j + 1] = arr2[j];
            j = j - 1;
        }
        arr2[j + 1] = key;
    }



 clock_t end2=clock();
timeinsertion+=(double)(end2-begin2)/CLOCKS_PER_SEC;
//insertion sort ends

//selection sort
clock_t begin3=clock();
int  min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr3[j] < arr3[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr3[min_idx], &arr3[i]);
    }

 clock_t end3=clock();
timeselection+=(double)(end3-begin3)/CLOCKS_PER_SEC;

//selection sort ends
/*for(int i=0;i<n;i++)
printf("%d ",arr1[i]);
printf("\n");


for(int i=0;i<n;i++)
printf("%d ",arr2[i]);
printf("\n");
for(int i=0;i<n;i++)c
printf("%d ",arr3[i]);*/

printf("\n");
printf("timeinsertion:%f",timeinsertion);
printf("\n");

printf("timebubble:%f",timebubble);
printf("\n");
printf("timeselection:%f",timeselection);
printf("\n");












}
