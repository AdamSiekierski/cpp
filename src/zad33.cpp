#include <iostream>

int main()
{
  std::cout << 3 * 7 / 2 - 1 << std::endl;
  std::cout << 3 * 7.0 / 2 - 1 << std::endl;
  std::cout << (3 * 7) / 2 - 1 << std::endl;
  std::cout << 3 * (7 / 2.0 - 1) << std::endl;
  std::cout << 3 * (7 / 2) - 1 << std::endl;
  std::cout << 3 * 7.0 / (2 - 1) << std::endl;
  std::cout << 124 % 12 - 2 * 4 << std::endl;
  std::cout << 4 * 105 % 10 / 2 * 108 << std::endl;
  std::cout << (-8 - 13 * 2) / 2.5 << std::endl;
  std::cout << (pow(2.5, 3) + 17 % 5) - sqrt(4) << std::endl;
  std::cout << 12 % 5 + 2 % 5 << std::endl;
  std::cout << 5 + 4 * 3.0 / 5 << std::endl;
  std::cout << 2 % 5 * 3 - 4 << std::endl;
  std::cout << 7 / 3 % 2 + 6 << std::endl;
  std::cout << 10 - 4 + 2 / 2 * 3 << std::endl;
  std::cout << 11 / 3 % 5 + 1 << std::endl;
  std::cout << 4 - 5 / 4.0 * 2 << std::endl;

  return 0;
}