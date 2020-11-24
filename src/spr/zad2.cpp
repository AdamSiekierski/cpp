#include <iostream>

int main()
{
  std::cout.precision(4);

  std::cout << "Podaj argument x: ";
  float x;
  std::cin >> x;

  if (x < 8)
  {
    std::cout << "Wynik: ";
    std::cout << (5 * (x * x)) + 3;
  }
  else if (x == 8)
  {
    std::cout << "Wynik: ";
    std::cout << sqrt(x) - 7;
  }
  else
  {
    std::cout << "Wynik: ";
    std::cout << abs(x + 1);
  }

  return 0;
}