#include <iostream>

int main()
{
  int n, i = 3;

  std::cout << "Podaj n: ";
  std::cin >> n;

  while (n)
  {
    std::cout << i << " ";
    i *= 2;
    n--;
  }

  return 0;
}