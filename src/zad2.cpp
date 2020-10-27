#include <iostream>
#include <math.h>

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

  std::cout << "Długość: " << 2 * M_PI * r;

  return 0;
}