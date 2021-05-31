#include <iostream>
using namespace std;

int main()
{
    int n, t;
    char str[100];
    scanf("%d%d", &n, &t);
    scanf("%s", str);
    for (int i = 0; i < t; i++)
        for (int ii = 0; ii < n - 1; ii++)
            if (str[ii] == 'B' && str[ii + 1] == 'G')
            {
                str[ii] = 'G';
                str[ii + 1] = 'B';
                ii++;
            }
    for (int i = 0; i < n; i++)
        printf("%c", str[i]);
}