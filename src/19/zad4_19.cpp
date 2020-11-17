#include <iostream>

int main()
{
  int n;

  std::cout << "Podaj n: ";
  std::cin >> n;

  std::cout << "Wartosc bezwzgledna liczby " << n << " to " << ((n < 0) ? -n : n);

  return 0;
}