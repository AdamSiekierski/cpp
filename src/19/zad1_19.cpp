#include <iostream>

int main()
{
  int a, b, c;

  std::cout << "podaj a, b i c \n";
  std::cin >> a >> b >> c;

  a < b &&a < c ? std::cout << "najmniejsza jest a" : b < c ? std::cout << "najmniejsze jest b" : std::cout << "najmniejsze jest c";

  return 0;
}