#include <iostream>

int main()
{
  int x, y;
  std::cout << "Podaj x: ";
  std::cin >> x;
  std::cout << "Podaj y: ";
  std::cin >> y;

  int s = 0;

  for (int i = x; i <= y; i++)
  {
    s += i;
  }

  std::cout << "Suma: " << s << std::endl;

  return 0;
}