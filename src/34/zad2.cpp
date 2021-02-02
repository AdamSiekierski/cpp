#include <iostream>

int main()
{
  float n;
  std::cout << "podaj n: ";
  std::cin >> n;

  int num = 0;
  while (n >= 1)
  {
    n = n / 10;
    num++;
  }

  std::cout << "Ilosc cyfr: " << num << std::endl;

  return 0;
}