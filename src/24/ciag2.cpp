#include <iostream>

int main()
{
    int n, x = -3;
    std::cout << "1.20 b:\nIle razy? ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << x << ", ";
        x *= -2;
    }
}
