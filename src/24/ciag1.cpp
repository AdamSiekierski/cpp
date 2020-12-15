#include <iostream>

int main()
{
    std::cout << "1.19 c \n";

    for (int i = 12; i >= -12; i -= 4)
    {
        std::cout << i << " ";
    }

    std::cout << "\n1.19 d\n";

    for (int i = 12; i >= -12; i -= 4)
    {
        if (i == 0)
            continue;

        std::cout << i;
    }

    return 0;
}
