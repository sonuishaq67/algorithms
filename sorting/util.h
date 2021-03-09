#ifndef UTIL_FOR_ALGO
#define UTIL_FOR_ALGO
#include <iostream>
using namespace std;
void input_n(int *n)
{
    int temp;
    cout << "Enter number of elements in the array ";
    cin >> temp;
    *n = temp;
}
void input_array(int arr[], int n)
{
    cout << "Enter " << n << " elements ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void print_array(string output,int arr[], int n)
{
    cout << output;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
#endif