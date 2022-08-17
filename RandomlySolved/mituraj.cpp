// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quicksort(int arr[], int l, int r)
{
    // Base case: No need to sort arrays of length <= 1
    if (l >= r)
    {
        return;
    }

    // Choose pivot to be the last element in the subarray
    int pivot = arr[r];

    // Index indicating the "split" between elements smaller than pivot and
    // elements greater than pivot
    int cnt = l;

    // Traverse through array from l to r
    for (int i = l; i <= r; i++)
    {
        // If an element less than or equal to the pivot is found...
        if (arr[i] <= pivot)
        {
            // Then swap arr[cnt] and arr[i] so that the smaller element arr[i]
            // is to the left of all elements greater than pivot
            swap(&arr[cnt], &arr[i]);

            // Make sure to increment cnt so we can keep track of what to swap
            // arr[i] with
            cnt++;
        }
    }

    // NOTE: cnt is currently at one plus the pivot's index
    // (Hence, the cnt-2 when recursively sorting the left side of pivot)
    quicksort(arr, l, cnt-2); // Recursively sort the left side of pivot
    quicksort(arr, cnt, r);   // Recursively sort the right side of pivot
}
    //main function to find the pairs
void printPairs(int arr[], int arr_size, int sum)
{
   int l = 0;
   int r = arr_size - 1;

   while (l < r)
   {
     if(arr[l]+arr[r]>arr_size)
     {r--;}
     else if(arr[l]+arr[r]<arr_size)
     {l++;}
     else
     print Pair;
     l++ or r--;
   }


}

//driver code
int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);
     quicksort( arr[],  0,  arr_size-1);
    //function calling
     printPairs(arr[], arr_size,  n);
    return 0;
}
