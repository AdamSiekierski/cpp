#include <iostream>

float pi = 3.14;

int main()
{
  float r;
  std::cout << "Podaj promień okręgu: ";
  std::cin >> r;

  if (r <= 0)
  {
    std::cout << "Błędne dane";

    return 1;
  }

  std::cout << "Długość: " << 2 * pi * r;

  return 0;
}