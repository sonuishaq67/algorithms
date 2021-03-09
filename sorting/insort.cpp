#include <iostream>
#include "util.h"
using namespace std;
void insertion_sort(int arr[], int n);

int main()
{
    int n;
    input_n(&n);
    int arr[n];
    input_array(arr, n);
    print_array("Unsorted array is ", arr, n);
    insertion_sort(arr, n);
    print_array("Sorted array is ", arr, n);
    return 0;
}

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int leastnum = i;
        while (leastnum > 0 && arr[leastnum-1] > arr[leastnum])
        {
            swap(arr[leastnum-1],arr[leastnum]);
            leastnum--;
        }
    }
}