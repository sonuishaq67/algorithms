#ifndef UTIL_FOR_ALGO
#define UTIL_FOR_ALGO
#include <iostream>
void input_n(int *n)
{
    int temp;
    std::cout << "Enter number of elements in the array ";
    std::cin >> temp;
    *n = temp;
}
void input_array(int arr[], int n)
{
    std::cout << "Enter " << n << " elements ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
}
void print_array(std::string output,int arr[], int n)
{
    std::cout << output;
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}
#endif