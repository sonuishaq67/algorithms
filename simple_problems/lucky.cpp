#include <iostream>
int main(int argc, char const *argv[])
{
    long long int n;
    std::cin >> n;
    int no=0;
    int is = 1;
    while (n != 0)
    {
        int t = n % 10;
        if ((t == 4) || (t == 7))
            no++;
        n = n / 10;
    }
    if (no==4||no==7)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
