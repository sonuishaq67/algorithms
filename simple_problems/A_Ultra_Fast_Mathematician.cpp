#include <iostream>
#include <bitset>
using namespace std;
int main(int argc, char const *argv[])
{
    string x1, x2;
    cin >> x1 >> x2;
    int len = max(x1.length(), x2.length());
    bitset<100> b1(x1);
    bitset<100> b2(x2);
    auto output = b1 ^ b2;
    string res = output.to_string();
    const char *array = res.c_str();
    for (int i = 100 - len; i < 100; i++)
        cout << array[i];
    return 0;
}
