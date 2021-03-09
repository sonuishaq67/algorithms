#ifndef UTIL_FOR_ALGO
#define UTIL_FOR_ALGO
void swap(int *a, int *b)
{
    int temp = *a;
    a = b;
    b = &temp;
}
#endif