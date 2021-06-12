#include <iostream>
int main(int argc, char const *argv[])
{
    int state[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int times[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            std::cin >> times[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if ((times[i][j] % 2))
            {
                state[i][j] = !state[i][j];
                if (i - 1 > -1)
                    state[i - 1][j] = !state[i - 1][j];
                if (i + 1 < 3)
                    state[i + 1][j] = !state[i + 1][j];
                if (j - 1 > -1)
                    state[i][j - 1] = !state[i][j - 1];
                if (j + 1 < 3)
                    state[i][j + 1] = !state[i][j + 1];
            }
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << state[i][j];
        std::cout << "\n";
    }
    return 0;
}
