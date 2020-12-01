#include <iostream>

int main()
{
  float x;
  int n;

  std::cout << "Podaj x i n: ";

  std::cin >> x >> n;

  switch (n)
  {
  case 1:
    std::cout << "y = " << sqrt(2 * x);
    break;
  case 2:
    std::cout << "y = " << (x * x) - 5;
    break;
  case 3:
    std::cout << "y = " << cos(x) + 1;
    break;
  default:
    std::cout << "y = " << 1;
  }

  return 0;
}