#include <iostream>

int main()
{
    int n, sum = 0;

    std::cout << "Podaj n:\n";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << (double)2 * n / sum;
}
