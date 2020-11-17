#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  srand(time(NULL));

  double x = (rand() * RAND_MAX * (275 + 112)) - 112;
  double absolute = x < 0 ? -x : x;

  std::cout << "Wartość bezwzględna dla " << x << ": " << absolute;

  return 0;
}