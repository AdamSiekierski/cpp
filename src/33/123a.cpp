#include <iostream>

int main()
{
  char l;
  std::cout << "podaj typ petli: ";
  std::cin >> l;

  int n;
  std::cout << "podaj dlugosc ciagu: ";
  std::cin >> n;

  int res;

  switch (l)
  {
  case 'F':
    break;
  case 'W':
    break;
  case 'D':
    break;
  default:
    std::cout << "nieznany typ petli" << std::endl;
    return 1;
  }

  std::cout << "wynik: " << res << std::endl;

  return 0;
}