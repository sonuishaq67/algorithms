#include <iostream>
int main()
{
    int a, b, c, d, y;
    scanf("%d", &y);
    while (true)
    {
        y++;
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    printf("%d",y);
    return 0;
}