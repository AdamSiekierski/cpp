#include <iostream>

int main()
{
  unsigned int x, y;

  std::cout << "Podaj n: ";
  std::cin >> x;

  y = x - 1;

  double res = 4 / (double)x;

  if (x != 0)
  {
    while (y)
    {
      res *= (3 + (double)y) / (double)x;
      y--;
    }

    std::cout << "Wynik: " << res;
  }
  else
  {
    std::cout << "Błędne dane";
  }

  return 0;
}