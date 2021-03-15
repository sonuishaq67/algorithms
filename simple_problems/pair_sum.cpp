#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int pair_sum(int[], int, int);

int main(int argc, char const *argv[])
{
    int n = 5;
    if (argc == 1)
        cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    int temp;
    if (argc == 1)
        cout << "Enter " << n << " elements ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (argc == 1)
        cout << "Enter the sum value ";
    int target;
    cin >> target;
    cout << pair_sum(arr, n, target) << endl;
    return 0;
}

int pair_sum(int arr[], int arrlen, int sum)
{
    set<pair<int, int>> output = {};
    set<int> find = {};
    if (arrlen < 2)
        return -1;
    for (int i = 0; i < arrlen; i++)
    {
        int target = sum - arr[i];
        if (find.count(target) == 0)
            find.insert(arr[i]);
        else
        {
            int minm = min(target, arr[i]);
            int maxm = max(target, arr[i]);
            output.insert(make_pair(minm, maxm));
        }
    }
    return output.size();
}