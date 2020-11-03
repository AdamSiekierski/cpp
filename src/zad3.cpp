#include <iostream>

int main()
{
  float a;

  std::cout << "podaj a rozne od 0:";
  std::cin >> a;

  if (a == 0)
  {
    std::cout << "a jest rowne 0\n";

    return 1;
  }

  std::cout << "odwrotnosc a: " << 1 / a;

  return 0;
}