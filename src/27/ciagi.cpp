#include <iostream>

int main()
{
  std::cout << "ciag 1: ";
  int i = 12;

  while (i >= -12)
  {
    std::cout << i << " ";
    i -= 4;
  }

  std::cout << "\nciag 2: ";
  i = 12;

  while (i >= -12)
  {
    if (i != 0)
      std::cout << i << " ";
    i -= 4;
  }

  std::cout << "\nciag 3:\n"
            << "Podaj długość ciągu: ";
  int n;
  std::cin >> n;

  i = -3;

  while (n > 0)
  {
    std::cout << i << " ";

    i *= -2;
    n -= 1;
  }

  std::cout << "\nciag 4:\n"
            << "Podaj dlugość ciągu: ";

  std::cin >> n;
  i = -10;

  int sum = 0;

  while (n > 0)
  {
    sum += i;

    i += 6;
    n -= 1;
  }

  std::cout << sum;

  return 0;
}