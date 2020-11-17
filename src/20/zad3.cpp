#include <iostream>

int main()
{
  int a, b, c;

  std::cout << "Podaj a, b i c";
  std::cin >> a >> b >> c;

  if ((a + b > c) && (a + c > b) && (b + c > a))
  {
    std::cout << "Trojkat moze istniec";
  }
  else
  {
    std::cout << "Trojkat nie moze istniec";
  }

  return 0;
}