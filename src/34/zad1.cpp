#include <iostream>

int main()
{
  float n;
  std::cout << "podaj n: ";
  std::cin >> n;

  int sum = 0;
  while (n >= 1)
  {
    sum += (int)n % 10;
    n = n / 10;
  }

  std::cout << "Suma: " << sum << std::endl;

  return 0;
}