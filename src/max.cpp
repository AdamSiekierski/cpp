#include <iostream>

int main()
{
  double a, b, max;
  std::cout << "Podaj a i b: ";
  std::cin >> a >> b;

  max = a > b ? a : b;

  std::cout << "Większa liczba: " << max;

  return 0;
}