#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
  float k, b1, m, b2;

  srand(time(NULL));

  k = -210.4 + ((float)std::rand() / RAND_MAX * (180.1 + 210.4));
  b1 = -210.4 + ((float)std::rand() / RAND_MAX * (180.1 + 210.4));
  m = -210.4 + ((float)std::rand() / RAND_MAX * (180.1 + 210.4));
  b2 = -210.4 + ((float)std::rand() / RAND_MAX * (180.1 + 210.4));

  std::cout << "Wylosowane k: " << k << " b1: " << b1 << " m: " << m << " b2: " << b2 << "\n";

  if (k == m)
  {
    if (b1 == b2)
    {
      std::cout << "Proste sa takie same";
    }
    else
    {
      std::cout << "Proste sa rownolegle";
    }
  }
  else if (k * m == -1)
  {
    std::cout << "Proste sa prostopadle";
  }
  else
  {
    std::cout << "Miedzy prostymi nie zachodzi zadna zaleznosc";
  }

  return 0;
}