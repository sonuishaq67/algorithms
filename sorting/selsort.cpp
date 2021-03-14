#include "util.h"
using namespace std;
void selection_sort(int arr[], int n);
int main()
{
    int n;
    input_n(&n);
    int arr[n];
    input_array(arr, n);
    print_array("Unsorted array is ", arr, n);
    selection_sort(arr, n);
    print_array("Sorted array is ", arr, n);
    return 0;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sel = i;
        for (int j = sel + 1; j < n; j++)
            if (arr[j] < arr[sel])
                sel = j;
        swap(arr[sel], arr[i]);
    }
}