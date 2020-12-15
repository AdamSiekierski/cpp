#include <iostream>

int main()
{
    int n, sum = 0, x = -10;

    std::cout << "1.20 c\nIle razy? ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << x << ", ";
        sum += x;
        x += 6;
    }
    std::cout << "Suma tych liczb to: " << sum;
}
