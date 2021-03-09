#include <iostream>
#include "util.h"
using namespace std;
void selection_sort(int arr[], int n);
int main()
{
    int n;
    cout << "Enter number of elements in the array ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "UnSorted array is";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    selection_sort(arr, n);
    cout << "Sorted array is";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
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