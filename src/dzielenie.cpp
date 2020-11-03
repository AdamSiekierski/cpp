#include <iostream>

int main()
{
  float a, b;

  std::cout << "Podaj a i b: ";
  std::cin >> a >> b;

  // b == 0 ? std::cout << "b nie moze byc rowne 0" : wynik = a / b; Wyrzuca błąd, cout nie może znależć się w przypadku użycia tego operatora warunkowego

  if (b == 0)
  {
    std::cout << "b nie moze byc rowne 0";

    return 1;
  }

  std::cout << a / b;
}