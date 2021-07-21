#include <iostream>
using namespace std;
int arr[10][10] = {0};

void warshall(int n)
{
    int i, j, k;
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                arr[i][j] = arr[i][j] || (arr[i][k] && arr[k][j]);
}

int main()
{
    int i, j, n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    printf("Enter the adjacency matrix:-");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> arr[i][j];

    warshall(n);

    printf("The transitive closure is:- \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        printf("\n");
    }
    return 0;
}