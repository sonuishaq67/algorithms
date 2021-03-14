#include "util.h"

using namespace std;

void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);

int main(int argc, char const *argv[])
{
    int n;
    input_n(&n);
    int arr[n];
    input_array(arr, n);
    print_array("Unsorted array is ", arr, n);
    merge_sort(arr, 0, n - 1);
    print_array("Sorted array is ", arr, n);
    return 0;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k, size1 = m - l + 1, size2 = r - m;
    int LEFT[size1], RIGHT[size2];

    for (i = 0; i < size1; i++)
        LEFT[i] = arr[l + i];
    for (j = 0; j < size2; j++)
        RIGHT[j] = arr[m + 1 + j];
    i = j = 0;
    k = l;

    while (i < size1 && j < size2)
    {
        if (LEFT[i] <= RIGHT[j])
            arr[k] = LEFT[i++];
        else
            arr[k] = RIGHT[j++];
        k++;
    }

    while (i < size1)
        arr[k++] = LEFT[i++];
    while (j < size2)
        arr[k++] = RIGHT[j++];
}

void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
