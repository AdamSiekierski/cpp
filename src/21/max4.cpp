#include <iostream>

int main()
{
  std::cout << "Podaj 4 kolejne liczby: ";
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  int max = (a > b) ? (a > c) ? (a > d) ? a : d : (c > d) ? c : d : (b > c) ? (b > d) ? b : d : (c > d) ? c : d;

  std::cout << "Najwieksza liczba: " << max;

  return 0;
}