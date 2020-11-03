#include <iostream>

int main()
{
  int n, suma;

  std::cout << "Podaj liczbe całkowita n: ";
  std::cin >> n;

  // n > 0 ? suma = (n * (n + 1)) / 2 : std::cout << "n nie jest wieksze od 0"; wyrzuca błąd

  if (!(n > 0))
  {
    std::cout << "n nie jest wieksze od 0";

    return 1;
  }

  suma = (n * (n + 1)) / 2;

  std::cout << suma;
}