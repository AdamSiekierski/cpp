#include <iostream>

using namespace std;

int main()
{
    cout << "Liczby podzielne przez 4 od 8 do 24\n";

    for (int i = 24; i >= 8; i--)
    {
        if (i % 4 == 0)
        {
            cout << i << " ";
        }
    }
}
