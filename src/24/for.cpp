#include <iostream>
#include <time.h>

int main()
{
    int x;

    std::cout << "Podaj zakres od 0 do ";
    std::cin >> x;

    std::cout << "\nKolejnosc rosnaca\n";

    for (int i = 0; i <= x; i += 2)
    {
        std::cout << i << " ";
    }

    std::cout << "\n\nKolejnosc malejaca\n";

    for (int i = x; i >= 0; i -= 2)
    {
        std::cout << i << " ";
    }

    return 0;
}
