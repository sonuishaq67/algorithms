#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    if (argc == 1)
        cout << "Enter a string : ";
    getline(cin, s);
    vector<string> initial_vector, final_vector;
    stringstream ssr(s);
    string intermediate;

    while (getline(ssr, intermediate, ' '))
        initial_vector.push_back(intermediate);

    for (auto it = initial_vector.rbegin(); it != initial_vector.rend(); ++it)
        final_vector.push_back(*it);
    for (auto i = final_vector.begin(); i != final_vector.end(); ++i)
        cout << *i << " ";
    cout << "\n";
    return 0;
}